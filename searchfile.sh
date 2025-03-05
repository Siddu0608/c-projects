#!/bin/bash
echo "7 days old files are listed below"
find /home/ec2-user -type f -mtime +7 -exec ls -l {} \;
