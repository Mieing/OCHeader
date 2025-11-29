@class AWESearchFilterSectionModel, AWESearchFilterCollectionViewColorConfiguration, AWESearchFilterCollectionView;

@interface AWESearchFilterSingleSectionView : UIView

@property (retain, nonatomic) AWESearchFilterCollectionView *collectionView;
@property (nonatomic) double horizonalPadding;
@property (readonly, nonatomic) AWESearchFilterSectionModel *model;
@property (retain, nonatomic) AWESearchFilterCollectionViewColorConfiguration *colorConfiguration;

- (void)configUI;
- (void)reloadModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
