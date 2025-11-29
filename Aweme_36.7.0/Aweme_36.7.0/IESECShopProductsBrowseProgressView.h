@class UIImageView, UILabel, UIView;

@interface IESECShopProductsBrowseProgressView : UIView

@property (retain, nonatomic) UIImageView *containerView;
@property (retain, nonatomic) UILabel *browsedCount;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *totalCount;

- (void)updateTotalCount:(unsigned long long)a0;
- (void)updateBrowsedCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpView;

@end
