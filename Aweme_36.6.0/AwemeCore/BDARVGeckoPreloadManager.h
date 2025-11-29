@class NSString;

@interface BDARVGeckoPreloadManager : NSObject <BDARGeckoManagerProtocol, BDARInitializeHookProtocol>

@property (copy, nonatomic) NSString *appID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initializeHooker;
+ (void)initializeHooker;
+ (void)initialize;
+ (id)sharedInstance;

- (id)dataForPath:(id)a0;
- (void)clearGeckoResource;
- (void)preloadGeckoWithAppID:(id)a0;
- (void)bdar_preloadGeckoWithAppID:(id)a0;
- (id)bdar_dataForPath:(id)a0;
- (void)bdar_clearGeckoResource;
- (void)setupGurdPollWithAccessKey:(id)a0 channels:(id)a1;
- (void)setupGurd:(id)a0;
- (void).cxx_destruct;

@end
