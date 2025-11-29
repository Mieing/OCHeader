@class UIButton, NSString, UIImageView, HDRMTImageView, UIView, NSNumber, UILabel;
@protocol _TtP9AWELottie13AWELottieView_;

@interface ACCToolBarItemView : UIView <ACCBarItemCustomView>

@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned long long sceneType;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (nonatomic) BOOL showLabel;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *lottieView;
@property (retain, nonatomic) UIImageView *divisionImageView;
@property (copy, nonatomic) NSString *itemLabelText;
@property (nonatomic) BOOL enableOffscreenOpt;
@property (retain, nonatomic) NSNumber *initialAlphaValue;
@property (retain, nonatomic) HDRMTImageView *hdrImageView;
@property (retain, nonatomic) UIView *titleView;
@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) BOOL showed;
@property (nonatomic) BOOL enable;
@property (nonatomic) void *itemId;
@property (copy, nonatomic) NSString *trackIdentifier;
@property (copy, nonatomic) NSString *trackFunctionName;
@property (nonatomic) BOOL isDivisionItemView;
@property (nonatomic) BOOL shownFirstTime;
@property (copy, nonatomic) id /* block */ lottieCompletionBlock;
@property (retain, nonatomic) UIView *guideView;
@property (nonatomic) BOOL enableHDRRendering;
@property (nonatomic) BOOL needShow;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *selectedImageName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double alpha;
@property (weak, nonatomic) UIButton *barItemButton;
@property (copy, nonatomic) id /* block */ itemViewDidClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onButtonClicked:(id)a0;
- (void)hideLabelWithDuration:(double)a0;
- (void)enableTitleState:(BOOL)a0;
- (id)initWithSceneType:(unsigned long long)a0;
- (id)p_createBarItemButton:(id)a0;
- (id)p_createBarItemLabel:(id)a0;
- (id)p_createBarItemLottieView:(id)a0;
- (void)p_needDisableNotHideButton:(id)a0;
- (void)setupDivisionView;
- (BOOL)buttonShouldReceiveHit;
- (void)configWithItem:(id)a0 direction:(unsigned long long)a1 buttonSize:(struct CGSize { double x0; double x1; })a2;
- (void)configWithDivisionItem:(id)a0 buttonSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateWithBottomToolBarStyle;
- (void)showLabelWithDuration:(double)a0;
- (void)p_hideLabel:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)makeLayout;
- (void)setInitialAlpha:(double)a0;

@end
