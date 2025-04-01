$path = ".\validwords.csv" 
$contents = Get-Content -Path $path

foreach ($string in $contents) {
    $tmp = $string.split(":")
    $string = $tmp[2] 
    $string
}