@class AWEEcommerceGuideSearchV2TabModel, DUXBaseImageView, UIView, DUXBaseLabel;

@interface AWESearchPromotionGuideSearchSlidingTabBarCell : DUXBaseCollectionViewCell

@property (retain, nonatomic) DUXBaseImageView *tabIcon;
@property (retain, nonatomic) DUXBaseLabel *tabLabel;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2TabModel *tabModel;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isFromEcommerce;

+ (struct CGSize { double x0; double x1; })cellSizeWithTabModel:(id)a0 collectionView:(id)a1 isSelected:(BOOL)a2 tabCount:(long long)a3;
+ (double)defaultHeight;

- (void)updateWithModel:(id)a0 isSelected:(BOOL)a1 isFromEcommerce:(BOOL)a2 tabCount:(long long)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
