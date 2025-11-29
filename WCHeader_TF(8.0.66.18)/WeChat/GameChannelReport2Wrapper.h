@interface GameChannelReport2Wrapper : NSObject

+ (id)sharedInstance;

- (void)initZTSDK;
- (id)channelInfoFromGameChannelReportInfo:(id)a0;
- (void)reportWithGameChannelReportInfo:(id)a0 isLaunchApp:(BOOL)a1;

@end
