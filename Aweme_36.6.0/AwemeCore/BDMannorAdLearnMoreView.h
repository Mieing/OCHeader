@class UILabel, NSString, UIView, UIImageView, BDMannorComponentManagerContext, BDMannorStyleTemplateComponentModel, BDMannorStyleTemplateComponentDataModel, UIColor;

@interface BDMannorAdLearnMoreView : UIView

@property (weak, nonatomic) BDMannorComponentManagerContext *context;
@property (retain, nonatomic) BDMannorStyleTemplateComponentModel *componentModel;
@property (retain, nonatomic) BDMannorStyleTemplateComponentDataModel *data;
@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIColor *toColor;
@property (retain, nonatomic) UIView *liveAnimationView;
@property (nonatomic) BOOL needFlashForAppoint;
@property (nonatomic) BOOL didFlash;
@property (nonatomic) BOOL isShowing;

- (void)playGuideAnimation;
- (void)playFlashAnimated:(BOOL)a0;
- (void)updateLearnMoreView;
- (void)playAnimationForFollowAd;
- (void)reShowBtnWhenAdUnfollow;
- (void)audienceQuitAllRoom;
- (BOOL)isAdCoin;
- (void)configDefaultBackgroundColor;
- (BOOL)shouldChangeButtonColor;
- (void)updateForAppointmentIfNeeded;
- (void)setupComponentViewUIWithModel;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithContext:(id)a0;
- (id)defaultBackgroundColor;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)prepareToAnimate;

@end
