@class UITapGestureRecognizer;

@interface AWEIMShareLocationBigCardView : AWEIMGeneralCardView

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (copy, nonatomic) id /* block */ tapAction;

- (void)constraintSubviews;
- (void)p_coverDidTapped:(id)a0;
- (void).cxx_destruct;

@end
