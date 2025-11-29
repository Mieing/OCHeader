@class AWEUserRecommendBaseCellViewLayout, AWEUserRecommendLabel, UIImageView, UIView, AWEUserRecommendButton, UIButton;

@interface AWEUserRecommendBaseCellView : UIView

@property (retain, nonatomic) AWEUserRecommendBaseCellViewLayout *layout;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *verificationImageView;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) AWEUserRecommendLabel *titleLabel;
@property (retain, nonatomic) AWEUserRecommendLabel *subtitleLabel;
@property (retain, nonatomic) AWEUserRecommendButton *primaryButton;
@property (retain, nonatomic) UIButton *secondaryButton;
@property (nonatomic) BOOL needsUpdateAccessibility;
@property (nonatomic) BOOL secondaryButtonHidden;
@property (nonatomic) BOOL highlighted;

+ (id)cellViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;

- (void)useFillStyleSecondaryButton;
- (void)useFillStylePrimaryButton;
- (void)setSecondaryButtonHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setNeedsUpdateAccessibility;
- (void)updateAccessibilityIfNeeded;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 layout:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })primaryButtonSize;
- (void)updateAccessibilityElements;

@end
