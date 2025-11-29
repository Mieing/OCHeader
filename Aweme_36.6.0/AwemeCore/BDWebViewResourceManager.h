@class NSString;

@interface BDWebViewResourceManager : NSObject

@property (nonatomic) double lastSyncTime;
@property (readonly, nonatomic) NSString *geckoAccessKey;
@property (nonatomic) BOOL isInHouse;

+ (id)sharedInstance;

- (id)bdw_hookAjaxJS;
- (void)didBecomeActiveNotification:(id)a0;
- (void)syncAssetsIfNeed;
- (id)innerChannels;
- (void)syncBDWebViewAssetsWithChannels:(id)a0 completion:(id /* block */)a1;
- (void)syncAssetsWithAccessKey:(id)a0 channels:(id)a1 completion:(id /* block */)a2;
- (id)fetchAjaxHookJS;
- (id)vConsoleJS;
- (id)nativeVideoHookJS;
- (id)fetchDetectBlankContentJS;
- (id)fetchHookConsoleLogToConfirm;
- (id)init;
- (void)dealloc;

@end
