@class UIImageView, UILabel, UIView, UIButton;

@interface AWEBatManOnQueueView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIView *bottomBar;
@property (copy, nonatomic) id /* block */ playBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)playAction;
- (void)updateWithModel:(id)a0;

@end
