@class UILabel, UIView;

@interface IESLiveAssociateHeadVideoFoundationDetailHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIView *leftDevideLine;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)bindViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
