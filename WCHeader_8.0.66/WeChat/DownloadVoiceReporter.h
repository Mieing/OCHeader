@interface DownloadVoiceReporter : NSObject

@property (nonatomic) unsigned long long startTime;

+ (id)reporter;

- (void)reportDownloadStart:(id)a0;
- (void)reportDownloadEnd:(id)a0 ret:(int)a1;

@end
