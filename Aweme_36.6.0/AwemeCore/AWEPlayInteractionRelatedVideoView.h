@class UIImageView, UILabel;

@interface AWEPlayInteractionRelatedVideoView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *rightTitleLabel;
@property (copy, nonatomic) id /* block */ noticeTapped;

- (void)layoutSubviews;
- (void)reloadWithModel:(id)a0;
- (void)reloadWithText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
