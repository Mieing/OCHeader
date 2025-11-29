@class NSString, NSMutableDictionary;

@interface AWEGrouponLifeFeedsLynxPreloadManager : NSObject <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (nonatomic) BOOL isTurnOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)preloadCaches;
- (id)appendQueryOntoLynxUrl:(id)a0;
- (id)cardForKey:(id)a0 inScene:(id)a1;
- (void)createCardWithNum:(long long)a0 builder:(id /* block */)a1;
- (id)generateViewWithLynxUrl:(id)a0;
- (void)clearCacheForScene:(id)a0;
- (void).cxx_destruct;

@end
