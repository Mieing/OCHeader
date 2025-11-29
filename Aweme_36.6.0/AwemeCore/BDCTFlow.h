@class BDCTEventTracker, BDCTFlowContext, BDCTAPIService, UINavigationController, UIViewController, BDCTFlowPerformance;

@interface BDCTFlow : NSObject

@property (retain, nonatomic) BDCTFlowContext *context;
@property (retain, nonatomic) BDCTAPIService *apiService;
@property (retain, nonatomic) BDCTEventTracker *eventTracker;
@property (retain, nonatomic) BDCTFlowPerformance *performance;
@property (weak, nonatomic) UINavigationController *rootNavigationController;
@property (weak, nonatomic) BDCTFlow *superFlow;
@property (nonatomic) BOOL forcePresent;
@property (nonatomic) BOOL disableInteractivePopGesture;
@property (weak, nonatomic) UIViewController *fromViewController;

+ (id)flowWithContext:(id)a0;

- (void)dismissLoading;
- (void)triggerRxtdgtdaasdf98fd;
- (id)facelivenessDetectResultWithParams:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)showViewController:(id)a0;
- (void)showLoading;

@end
