@interface WCFinderLivePlayStatusReporter : NSObject

+ (void)reportPlayStatusWithPlayerItem:(id)a0 liveId:(unsigned long long)a1 playTime:(unsigned int)a2 playStatus:(unsigned long long)a3;
+ (id)getPlayStatusReportDictionaryWithTid:(id)a0;

@end
