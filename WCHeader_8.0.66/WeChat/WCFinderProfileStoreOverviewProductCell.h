@class ECProductCardViewModel, NSMutableDictionary;

@interface WCFinderProfileStoreOverviewProductCell : UICollectionViewCell

@property (retain, nonatomic) NSMutableDictionary *viewMap;
@property (retain, nonatomic) ECProductCardViewModel *viewDataModel;

+ (double)viewHeightByDataModel:(id)a0;
+ (id)elementsForCardVM:(id)a0;

- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
