@class UIButton, UIImageView, UIVisualEffectView, UILabel, UIView, MASConstraint;
@protocol ACCAIGCUGCFusionCreationToolsCreateBodyLargeViewDelegate;

@interface ACCAIGCUGCFusionCreationToolsCreateBodyLargeView : UIView

@property (retain, nonatomic) UIView *createBodyTipsView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MASConstraint *iconImageViewBottomConstraint;
@property (retain, nonatomic) MASConstraint *titleLabelBottomConstraint;
@property (retain, nonatomic) UIImageView *createBodyImageView;
@property (retain, nonatomic) UIButton *changeCreateBodyButton;
@property (retain, nonatomic) UIVisualEffectView *loraContainerView;
@property (retain, nonatomic) UIButton *changeLoraButton;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *doingLoraContainerView;
@property (retain, nonatomic) UIView *doingLoraView;
@property (retain, nonatomic) UIImageView *starImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) MASConstraint *starImageViewBottomConstraint;
@property (retain, nonatomic) MASConstraint *textLabelBottomConstraint;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL loraContainerViewHidden;
@property (nonatomic) BOOL doingLoraContainerViewHidden;
@property (weak, nonatomic) id<ACCAIGCUGCFusionCreationToolsCreateBodyLargeViewDelegate> delegate;

- (void)onThemeChanged;
- (void)bindService;
- (BOOL)shouldFitLightModeUI;
- (void)updateCreateBodyImageWithImage:(id)a0 personInfo:(id)a1;
- (void)loraContainerViewDidClicked;
- (void)createBodyTipsViewDidClicked;
- (void)createBodyImageViewDidClicked;
- (void)changeCreateBodyButtonDidClicked;
- (void)updateUIWithType:(unsigned long long)a0;
- (void)updateCreateBodyImageWithImage:(id)a0;
- (void)updateUIWithIsKeyboardShow:(BOOL)a0 viewCornerRadius:(double)a1;
- (void)updateChangeLoraAndCloseButton:(BOOL)a0;
- (void)updateImageViewContentMode:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)layoutSubviews;
- (void)setupViews;

@end
