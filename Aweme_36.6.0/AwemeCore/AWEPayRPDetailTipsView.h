@class UIImageView, UILabel, UIView;

@interface AWEPayRPDetailTipsView : UIView

@property (retain, nonatomic) UIImageView *triangleView;
@property (retain, nonatomic) UIView *tipsContainerView;
@property (retain, nonatomic) UIImageView *tipsIconView;
@property (retain, nonatomic) UILabel *tipsContent;

- (void)updateWithTipsContent:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
