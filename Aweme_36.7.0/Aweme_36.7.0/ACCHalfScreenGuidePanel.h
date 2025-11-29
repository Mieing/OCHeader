@class ACCHalfScreenGuidePanelConfig, UIImageView, UIView, UILabel, ACCAnimatedButton;

@interface ACCHalfScreenGuidePanel : UIView

@property (retain, nonatomic) ACCHalfScreenGuidePanelConfig *config;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (retain, nonatomic) UIImageView *animatedImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) ACCAnimatedButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UIView *bgView;

+ (double)contentViewHeightWithConfig:(id)a0;
+ (void)showOnView:(id)a0 config:(id)a1 withConfirmBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)p_dismiss:(unsigned long long)a0;
- (void)p_didClickMask:(id)a0;
- (void)p_didClickCloseButton:(id)a0;
- (void)p_didClickConfirmButton:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
