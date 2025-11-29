@class NSArray, NSString;

@interface AWEUGDesktopChannelHalfScreenGuideViewController : AWEUGDesktopChannelBaseViewController <AWEDesktopSystemPopupGuideActionDelegateProtocol>

@property (retain, nonatomic) NSArray *dispatchMessageSceneUniqueKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)desktopGuideCancelButtonClick;
- (void)desktopGuideCloseButtonClick;
- (void)desktopGuideConfirmButtonClick;
- (void)desktopGuideMaskAreaClick;
- (id)initWithModel:(id)a0 scene:(id)a1 enterFrom:(id)a2 component:(id)a3;
- (void)showHalfScreenGuideWithModel:(id)a0;
- (void).cxx_destruct;
- (void)show;

@end
