@interface VideoPlayReporter : NSObject

+ (void)reportOnClickToPlayWithMsg:(id)a0 playAction:(int)a1;
+ (void)reportOnClickToPlayWithMsg:(id)a0 playAction:(int)a1 totalPlayTime:(unsigned int)a2 loadingTime:(unsigned long long)a3;
+ (id)getActionPrefix:(id)a0;
+ (void)reportOnDownloadMsg:(id)a0 taskInfo:(id)a1;

@end
