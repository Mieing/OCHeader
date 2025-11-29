@class UIImageView, UILabel, AWEEcommerceGuideSearchV2TabModel;

@interface AWESearchGuideSearchSlidingTabBarCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *tabIcon;
@property (retain, nonatomic) UILabel *tabLabel;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2TabModel *tabModel;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isFromEcommerce;

+ (struct CGSize { double x0; double x1; })cellSizeWithTabModel:(id)a0 isSelected:(BOOL)a1;
+ (double)defaultHeight;

- (void)updateWithModel:(id)a0 isSelected:(BOOL)a1 isFromEcommerce:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
