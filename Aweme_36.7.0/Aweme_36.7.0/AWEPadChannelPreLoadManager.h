@class NSDictionary, NSHashTable;

@interface AWEPadChannelPreLoadManager : NSObject

@property (retain, nonatomic) NSHashTable *preLoadTaskTable;
@property (retain, nonatomic) NSDictionary *preloadChannelMap;
@property (nonatomic) BOOL isPreloading;
@property (nonatomic) BOOL isFeedReady;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)sharedInstance;

- (void)preloadIfNeeded;
- (void)setupPreloadEnvironment;
- (void)preloadTaskFinish:(id)a0;
- (void)addPreloadTask:(id)a0 channelId:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
