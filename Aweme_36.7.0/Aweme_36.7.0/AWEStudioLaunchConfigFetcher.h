@class AWEPublishHealthPunishConfigFetcherModule;

@interface AWEStudioLaunchConfigFetcher : NSObject

@property (nonatomic) BOOL didStart;
@property (readonly, nonatomic) AWEPublishHealthPunishConfigFetcherModule *punishModule;

+ (id)shareInstance;

- (void)startModules;
- (void)startFetcher;
- (void).cxx_destruct;
- (id)init;

@end
