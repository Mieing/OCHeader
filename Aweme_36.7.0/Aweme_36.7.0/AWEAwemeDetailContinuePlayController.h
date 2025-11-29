@class NSString;

@interface AWEAwemeDetailContinuePlayController : AWEAwemeNewDetailBaseController <AWEViewControllerLifeCycle>

@property (nonatomic) BOOL didEnterOthersPage;
@property (nonatomic) BOOL enableContinuePlayWhenNotBeginPlay;
@property (nonatomic) BOOL didEnterPinchPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willConfigCell:(id)a0 model:(id)a1;
- (void)configCell:(id)a0 model:(id)a1;
- (BOOL)shouldOptimizeContinuePlayWithModel:(id)a0 seekTime:(double)a1;
- (id)getDefaultSeekTimeSource:(long long)a0;
- (void)configSeekDefaultTime:(double)a0 model:(id)a1 seekSource:(long long)a2 wakeUpSlider:(BOOL)a3 detailCellVC:(id)a4;
- (void)configDPlayerRelayPlay:(id)a0 model:(id)a1;
- (BOOL)enableContinuePlay;
- (BOOL)shouldUpdateProgress;
- (double)seekTimeLimitedVal;
- (BOOL)shouldPlayletNeedUpdateProgress:(BOOL)a0;
- (void)trackVideoRelayPlayWithModel:(id)a0 relayType:(id)a1 relayTime:(double)a2;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear;

@end
