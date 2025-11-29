@class NSString, NSMutableDictionary;

@interface AWEPOILynxPreloadManagerV2 : NSObject <AWEPOICubeViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *preloadingViewDict;
@property (retain, nonatomic) NSMutableDictionary *readyViewDict;
@property (retain, nonatomic) NSMutableDictionary *lynxTimingParamsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preloadConfigsForPage:(id)a0 bizCode:(id)a1 poiBackendType:(id)a2;
+ (id)sharedInstance;

- (void)cubeView:(id)a0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)cubeView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)cubeView:(id)a0 didReceiveError:(id)a1;
- (void)cubeView:(id)a0 onSetupLynxInfo:(id)a1;
- (void)cubeView:(id)a0 onUpdateLynxInfo:(id)a1;
- (void)preloadViewForCubeModel:(id)a0 lynxClass:(Class)a1 uniqueTag:(id)a2;
- (void)preloadViewForCubeModel:(id)a0 lynxClass:(Class)a1;
- (void)removePreloadViewForURL:(id)a0;
- (id)viewForURL:(id)a0 preloadID:(id)a1;
- (void)updatePreLoadCacheWithCubeModel:(id)a0;
- (void)clearAllTimingInfo;
- (id)timingParamsForUrl:(id)a0;
- (void)clearTimingParamsWithUrl:(id)a0;
- (id)preloadKey:(id)a0;
- (void)updateTimingParamsWithParamKey:(id)a0 paramValue:(id)a1 forKey:(id)a2;
- (BOOL)shouldEnablePreloadForChannel:(id)a0 bundle:(id)a1 lynxVersion:(unsigned long long)a2;
- (unsigned long long)packageVersionForChannel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
