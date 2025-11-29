@class UIImageView, UILabel;

@interface AWERVExposedMixInfoHeadView : UIView

@property (retain, nonatomic) UIImageView *mixIconImageView;
@property (retain, nonatomic) UILabel *mixInfoNameLabel;
@property (retain, nonatomic) UILabel *updateDescLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
