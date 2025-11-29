@class UIImageView, UILabel, AWESearchEcommerceAnchorModel;

@interface AWESearchGoodsItemView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *moreLabel;
@property (readonly, nonatomic) AWESearchEcommerceAnchorModel *model;
@property (nonatomic) BOOL showMore;

- (void)reloadWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
