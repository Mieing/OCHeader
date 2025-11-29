@class NSString;

@interface AWEUGDesktopChannelImageMediumScreenViewController : AWEUGDesktopChannelBaseViewController <AWEDesktopSystemPopupGuideActionDelegateProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)desktopGuideCancelButtonClick;
- (void)desktopGuideCloseButtonClick;
- (void)desktopGuideConfirmButtonClick;
- (void)desktopGuideMaskAreaClick;
- (void)show;

@end
