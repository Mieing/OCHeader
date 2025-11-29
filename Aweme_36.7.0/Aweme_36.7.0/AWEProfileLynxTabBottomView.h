@class UIImageView, UILabel, UIView;

@interface AWEProfileLynxTabBottomView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *contentLabel;
@property (copy, nonatomic) id /* block */ didClick;

- (void)didClickView;
- (void)setViewBackgroundColor:(id)a0;
- (void)setImageWithURL:(id)a0 defaultImage:(id)a1;
- (void).cxx_destruct;
- (void)setContentColor:(id)a0;
- (void)setImage:(id)a0;
- (void)setContent:(id)a0;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
