<?php
// Read the contents of /etc/environment
$env_file = '/etc/environment';
$env_contents = file_get_contents($env_file);

// Parse the environment variables
$env_lines = explode("\n", $env_contents);
foreach ($env_lines as $line) {
    if (strpos($line, '=') !== false) {
        list($key, $value) = explode('=', $line, 2);
        putenv(trim($key) . '=' . trim($value));
    }
}
?>
