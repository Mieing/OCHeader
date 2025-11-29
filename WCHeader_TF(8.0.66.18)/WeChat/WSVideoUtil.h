@interface WSVideoUtil : NSObject

+ (id)timeFormat:(int)a0;
+ (void)ReportIDKeyForVideoPlayErrCode:(int)a0;
+ (void)Report15248ForVideo:(id)a0 retCode:(int)a1 playTimeInSec:(unsigned int)a2;
+ (void)Report16270ForVideo:(id)a0 retCode:(int)a1 vt:(int)a2 cdnTaskInfo:(id)a3;
+ (void)Report16270VideoCdnStatusToSvr:(id)a0 retCode:(int)a1 vt:(int)a2 cdnTaskInfo:(id)a3;
+ (void)ReportIDKeyForVideoThumbDownload:(id)a0 nsUrl:(id)a1;

@end
