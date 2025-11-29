@class AWEIMUIImageViewPresenter, AWEIMUIButtonPresenter, AWEIMGestureUIViewPresenter, AWEIMUILabelPresenter, CAGradientLayer, AWEIMDoubleAvatarViewPresenter;

@interface AWEIMIncentiveChatContentPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIImageViewPresenter *background;
@property (retain, nonatomic) AWEIMUIImageViewPresenter *icon;
@property (retain, nonatomic) AWEIMDoubleAvatarViewPresenter *doubleAvatar;
@property (retain, nonatomic) AWEIMGestureUIViewPresenter *subtitleContainer;
@property (retain, nonatomic) AWEIMUILabelPresenter *title;
@property (retain, nonatomic) AWEIMUILabelPresenter *subTitle;
@property (retain, nonatomic) AWEIMUIButtonPresenter *button;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void)didReceiveProps:(id)a0;
- (void)themeDidChangeNoti:(id)a0;
- (void)p_updateTitle;
- (void)p_updateSubtitle;
- (void)p_updateBackground;
- (void)p_updateButton;
- (void)p_updateIconOrDoubleAvatar;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)subtitleAttributedString;

@end
