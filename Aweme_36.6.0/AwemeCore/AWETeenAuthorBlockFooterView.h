@class UIImageView, UILabel, UIView;

@interface AWETeenAuthorBlockFooterView : UICollectionReusableView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *blockImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (void)showContent:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
