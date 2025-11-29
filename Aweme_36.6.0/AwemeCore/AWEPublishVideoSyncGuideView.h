@class UIImageView, UILabel, UIView, UIButton;

@interface AWEPublishVideoSyncGuideView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *triangleImageView;
@property (copy, nonatomic) id /* block */ confirmButtonDidClickBlock;

- (void)confirmButtonDidClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
