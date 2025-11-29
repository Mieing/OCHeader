@class AWEIMUIImageViewPresenter, AWEIMUIButtonPresenter, CAGradientLayer, AWEIMYYLabelPresenter, UIImageView, AWEIMGestureUIViewPresenter;

@interface AWEIMStreakPetElfInviteCardPresenter : AWEIMUIViewPresenter

@property (retain, nonatomic) AWEIMUIImageViewPresenter *icon;
@property (retain, nonatomic) AWEIMYYLabelPresenter *title;
@property (retain, nonatomic) AWEIMYYLabelPresenter *subTitle;
@property (retain, nonatomic) AWEIMUIButtonPresenter *button;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) AWEIMGestureUIViewPresenter *allCardTapView;

- (id)createViewWithContext:(id)a0;
- (void)updateView:(id)a0 withContext:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
