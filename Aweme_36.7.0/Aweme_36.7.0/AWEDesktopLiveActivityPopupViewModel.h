@class AWEDesktopLiveActivityAskPopupModel;
@protocol AWEDesktopSystemPopupGuideActionDelegateProtocol;

@interface AWEDesktopLiveActivityPopupViewModel : NSObject

@property (retain, nonatomic) AWEDesktopLiveActivityAskPopupModel *guideModel;
@property (weak, nonatomic) id<AWEDesktopSystemPopupGuideActionDelegateProtocol> actionDelegate;

- (void)requestPushSettingStatusWithScene:(id)a0 completion:(id /* block */)a1;
- (void)rightButtonAction;
- (id)initWithGuideModel:(id)a0 actionDelegate:(id)a1;
- (double)guideViewHeight;
- (void)liveActivityAskPopupCanShowWithCompletion:(id /* block */)a0;
- (void)guideViewDidLoad;
- (void)leftButtonAction;
- (void)clickMaskAreaAction;
- (void)trackNotificationSwitch:(BOOL)a0;
- (void)setPushSettingStatusWithScene:(id)a0 value:(id)a1;
- (void)trackClickWithClickPosition:(id)a0;
- (void).cxx_destruct;
- (void)closeButtonAction;

@end
