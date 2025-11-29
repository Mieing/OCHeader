@class NSString, NSMutableDictionary;

@interface AWEGrouponLifeFeedsLynxPreloadManager : NSObject <BDXContainerLifecycleProtocol> {
    NSMutableDictionary *cache;
    BOOL isTurnOn;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)preloadCaches;
- (id)appendQueryOntoLynxUrl:(id)a0;
- (id)viewForKey:(id)a0 inScene:(id)a1;
- (id)generateViewWithLynxUrl:(id)a0;
- (void)clearCacheForScene:(id)a0;
- (void).cxx_destruct;

@end
