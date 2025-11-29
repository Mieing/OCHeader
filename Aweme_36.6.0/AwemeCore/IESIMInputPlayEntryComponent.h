@class AWEIMInputVCBadgeButton, UIButton, NSString;

@interface IESIMInputPlayEntryComponent : AWEIMComponentBase <IESIMInputPlayEntryComponentInterface, IESIMInputThemeChangedAction, IESIMInputLayoutAction>

@property (retain, nonatomic) AWEIMInputVCBadgeButton *playEntryBtn;
@property (retain, nonatomic) UIButton *playEntryButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)startPlayEntryGuideAnimationWithImage:(id)a0 completion:(id /* block */)a1;
- (void)startFirstGuideAnimationWithPlayEntryWithImage:(id)a0 completion:(id /* block */)a1;
- (void)playEntryBtnClicked:(id)a0;
- (void)p_trackButtonShowIfNeed;
- (id)p_playEntryBgColor;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (void)triggerLayoutLeftButton;
- (BOOL)shouldShowPlayEntryButton;
- (void).cxx_destruct;

@end
