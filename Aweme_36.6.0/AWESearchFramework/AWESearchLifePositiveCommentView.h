@class UIImageView, UILabel;

@interface AWESearchLifePositiveCommentView : UIView

@property (weak, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ didTapBlock;

- (void)updateContentWithIconURL:(id)a0 text:(id)a1;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
