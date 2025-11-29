@class BDSHSpanEngine, BDSHEventTracker;
@protocol BDSHEngineDelegate;

@interface BDSHEngine : NSObject

@property (retain, nonatomic) BDSHSpanEngine *spanEngine;
@property (weak, nonatomic) id<BDSHEngineDelegate> delegate;
@property (nonatomic) BOOL asyncOptimizeEnabled;
@property (retain, nonatomic) BDSHEventTracker *tracker;
@property (nonatomic) BOOL isRenderFinished;
@property (nonatomic) BOOL hasBuildView;

+ (BOOL)validTemplateData:(id)a0;
+ (long long)sheoVersion;
+ (void)updateGeckoResource:(id)a0 completion:(id /* block */)a1;
+ (BOOL)checkValidTemplateVersion:(id)a0;

- (void)updateLayoutWithWidth:(double)a0 height:(double)a1;
- (id)initWithConfigBlock:(id /* block */)a0;
- (void)buildViewWithConfigBlock:(id /* block */)a0;
- (void)sendEventWithName:(id)a0 params:(id)a1;
- (void)setupEngine:(id)a0;
- (void)setupBuildConfig:(id)a0;
- (void)loadTemplateUrlWithConfig:(id)a0;
- (void)loadTemplateDataWithConfig:(id)a0;
- (void)handleResultCode:(long long)a0 renderedView:(id)a1 callback:(id /* block */)a2;
- (void)handleEventType:(long long)a0 params:(id)a1;
- (void)sendLog:(id)a0 level:(long long)a1 tag:(id)a2;
- (void)handleTemplateType:(long long)a0;
- (void)addDebugLogoWithRootView:(id)a0;
- (void)handleBridgeName:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)handleChangeContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)handleGetCustomComponentWithCustomType:(id)a0 extra:(id)a1;
- (void)handleSendDebugLog:(id)a0;
- (void)trackLog:(id)a0;
- (void).cxx_destruct;

@end
