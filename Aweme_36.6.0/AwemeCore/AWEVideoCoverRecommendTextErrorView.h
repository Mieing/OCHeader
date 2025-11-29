@class UILabel, UIButton;

@interface AWEVideoCoverRecommendTextErrorView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ didTapButtonBlock;

- (id)initWithTitleText:(id)a0 buttonText:(id)a1;
- (void)setupSubViews;
- (void).cxx_destruct;

@end
