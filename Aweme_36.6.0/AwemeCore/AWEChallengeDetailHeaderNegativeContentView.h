@class UIImageView, UILabel, UIView;

@interface AWEChallengeDetailHeaderNegativeContentView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *labelContainer;
@property (retain, nonatomic) UILabel *label;

- (void)setupAnimationIfNeeded;
- (void)updateWithContent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
