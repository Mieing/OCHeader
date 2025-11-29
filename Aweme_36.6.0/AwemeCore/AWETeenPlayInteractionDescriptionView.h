@class UIView, UILabel, AWETeenDescriptionTextView, CAGradientLayer, NSTextStorage, MASConstraint, AWETeenDescriptionContext, UIScrollView;

@interface AWETeenPlayInteractionDescriptionView : UIView

@property (retain, nonatomic) UIScrollView *outerScrollView;
@property (retain, nonatomic) UIView *descriptionContentView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MASConstraint *descriptionScrollViewHeightConstraint;
@property (retain, nonatomic) NSTextStorage *descriptionTextViewString;
@property (nonatomic) double width;
@property (retain, nonatomic) AWETeenDescriptionContext *descriptionContext;
@property (retain, nonatomic) UIView *descriptionGradientView;
@property (retain, nonatomic) AWETeenDescriptionTextView *descriptionTextView;
@property (retain, nonatomic) UIScrollView *descriptionScrollView;
@property (retain, nonatomic) UILabel *packLabel;

- (void)resetMasConstraint;
- (id)initWithViewWidth:(double)a0 withDescriptionContext:(id)a1;
- (void)setScrollMasConstraint:(double)a0 withAttribueString:(id)a1;
- (void)updateDescriptionGradientViewMask:(BOOL)a0 gradientHeight:(double)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
