@class BDUGFlowAuthToken, AWEUGLiveActivityGuideConfig;
@protocol AWEUGLiveActivityPermissionGuideDelegateProtocol;

@interface AWELiveActivityPermissionGuideViewModel : NSObject

@property (retain, nonatomic) AWEUGLiveActivityGuideConfig *guideModel;
@property (retain, nonatomic) BDUGFlowAuthToken *token;
@property (retain, nonatomic) id<AWEUGLiveActivityPermissionGuideDelegateProtocol> actionDelegate;

- (void)rightButtonAction;
- (id)initWithGuideModel:(id)a0 actionDelegate:(id)a1;
- (double)guideViewHeight;
- (void)guideViewDidLoad;
- (void)clickMaskAreaAction;
- (void)preparePiPResourceWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)closeButtonAction;

@end
