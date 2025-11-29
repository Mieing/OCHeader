@class GCPannelItem;

@interface GCPannelCellModel : GCBaseCellModel

@property (retain, nonatomic) GCPannelItem *pannelItem;

- (Class)bindCellClass;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
