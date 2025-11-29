@class UIColor, UIImageView, AWEIMSilverWingRecommendListViewModel, UILabel, UIView;

@interface AWEIMSilverWingRecommendListTextView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *emojiLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL backgroundImageIsBright;
@property (retain, nonatomic) UIImageView *nextTapImageView;
@property (nonatomic) BOOL fixSize;
@property (retain, nonatomic) AWEIMSilverWingRecommendListViewModel *renderModel;

- (void)renderWithModel:(id)a0;
- (void)p_constraintSubViews;
- (void)updateViewWithBackgroundImage:(BOOL)a0 isBright:(BOOL)a1 customBackgroundColor:(id)a2 customTextColor:(id)a3 customBorderColor:(id)a4;
- (void)updateTextConstraint;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
