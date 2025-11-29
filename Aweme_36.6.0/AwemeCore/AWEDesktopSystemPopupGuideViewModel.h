@class AWEUGDesktopChannelBaseViewController, AWEDesktopSystemPopupGuideModel;
@protocol AWEDesktopSystemPopupGuideActionDelegateProtocol;

@interface AWEDesktopSystemPopupGuideViewModel : NSObject

@property (retain, nonatomic) AWEDesktopSystemPopupGuideModel *guideModel;
@property (weak, nonatomic) id<AWEDesktopSystemPopupGuideActionDelegateProtocol> actionDelegate;
@property (readonly, nonatomic) AWEUGDesktopChannelBaseViewController *controller;

- (void)rightButtonAction;
- (id)initWithGuideModel:(id)a0 actionDelegate:(id)a1;
- (double)guideViewHeight;
- (void)guideViewDidLoad;
- (void)leftButtonAction;
- (void)clickMaskAreaAction;
- (BOOL)needToEnablePip;
- (void)desktopButtonAction;
- (id)initWithGuideModel:(id)a0 actionDelegate:(id)a1 controller:(id)a2;
- (void)prepareGuideViewResource;
- (void)recordWidgetShowTime;
- (void)trackGuideWithAction:(id)a0;
- (void)trackWithAction:(id)a0;
- (void)openDesktopShortCut;
- (void).cxx_destruct;
- (void)closeButtonAction;

@end
