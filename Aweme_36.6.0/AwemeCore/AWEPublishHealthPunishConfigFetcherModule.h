@class NSString, AWEPublishHealthPunishConfig;

@interface AWEPublishHealthPunishConfigFetcherModule : NSObject <ACCUserServiceMessage, AWEStudioLaunchConfigFetcherSubModuleProtocol>

@property (retain, nonatomic) AWEPublishHealthPunishConfig *currentPunishConfig;
@property (nonatomic) BOOL isPunishFetcherDone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveCacheJson:(id)a0;
+ (id)loadCacheJson;
+ (id)cacheKey;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogout;
- (void)fetchPublishHealthPunishConfig;
- (void)loadFromCache;
- (double)updateTimeInterval;
- (void)onUpdateTimeReached;
- (void)onApplicationActivate;
- (id)punishConfig;
- (void).cxx_destruct;
- (void)start;

@end
