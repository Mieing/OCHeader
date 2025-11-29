@class AWEIMInputVCBadgeButton, NSString;

@interface IESIMInputCameraComponent : AWEIMComponentBase <IESIMInputCameraComponentInterface, IESIMInputThemeChangedAction>

@property (retain, nonatomic) AWEIMInputVCBadgeButton *videoBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)videoButton;
- (void)videoBtnClicked:(id)a0;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (void).cxx_destruct;

@end
