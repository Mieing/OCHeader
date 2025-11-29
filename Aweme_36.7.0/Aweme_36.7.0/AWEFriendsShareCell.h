@class UIImageView, UILabel, UIView;

@interface AWEFriendsShareCell : UIView

@property (nonatomic) BOOL shouldUseConstColor;
@property (retain, nonatomic) UIView *circleView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (copy, nonatomic) id /* block */ shareBlock;

- (id)initWithConstColor:(BOOL)a0;
- (void)setCellImage:(id)a0 withTitle:(id)a1;
- (void).cxx_destruct;
- (void)share:(id)a0;
- (void)setupUI;

@end
