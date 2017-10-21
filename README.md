# daemon
a simple daemon written in C

# purpose
Gain familiarity with developing a system daemon.

# goal
Ideally, I'd like to make something which is cross platform. My goal is to create a system daemon which can accomodate the uploading of media files created by the Zoom meeting application to a private YouTube channel for limited dissemination.

# props
http://www.thegeekstuff.com/2012/02/c-daemon-process/

# tips
1. per Thomson Comer
> Now you need to investigate using systemd or upstart or cron to keep it running.

# Notes re: Zoom
- Zoom macOS default behavior: media files written to `/Users/<username>/Documents/Zoom/<yyyy-mm-dd hh.mm.ss @... @... Zoom Meeting #...`
- e.g. `2017-10-19 22.31.39 Patrick Kennedy's Zoom Meeting 879767572`

# YouTube uploading
- https://developers.google.com/youtube/v3/
- https://github.com/tokland/youtube-upload/blob/master/setup.py

# Notes from convo with Old Shoe on the Desk Bike
- usually takes less than 2 minutes for longer meetings to process
- How to deal with Zoom recording pauses?
- Zoom API mostly for stats
- Lambda Admin Account
- YouTube dropdown menu: make video UNLISTED
- check w/Austen re: other settings (no comments, stats etc.)
- Video Naming conventions??? Cohort?
- After YouTube upload, publishing to Piazza would be Yuge!!!!!!!!!!!!!!!!!!
