@class NSString;

@interface AWEFeedAdMLSDKQuickSlidePredictManager : HTSService <AWEFeedAdMLSDKQuickSlidePredictProtocol>

@property (nonatomic) BOOL isEngineOpen;
@property (nonatomic) BOOL slideQuicklyPredictRet;
@property (nonatomic) unsigned long long videoFeatureInputTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)willUserSlideQuickly;
- (id)initAdMLSDKQuickSlideManager;
- (void)initQuickSlideModelParamsWithModel:(id)a0;
- (void)updateQuickSlideModelParams:(long long)a0 withModel:(id)a1;
- (void)setupQucikSlidePredictService;
- (void)inputFeaturesToPredictModel:(id)a0;
- (void)predictNextAdSlideSpeed:(id)a0;

@end
