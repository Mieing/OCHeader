@class AWESearchFilterSectionModel, UIColor, UILabel, AWESearchFilterCollectionViewColorConfiguration, AWESearchFilterCollectionView;

@interface AWESearchFilterSectionView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESearchFilterCollectionView *collectionView;
@property (nonatomic) double horizonalPadding;
@property (readonly, nonatomic) AWESearchFilterSectionModel *model;
@property (nonatomic) BOOL isNewStyle;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) AWESearchFilterCollectionViewColorConfiguration *colorConfiguration;

- (void)configUI;
- (void)reloadModel:(id)a0;
- (void)newConfigUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
