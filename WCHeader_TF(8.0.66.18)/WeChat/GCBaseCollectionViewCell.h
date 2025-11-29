@class GCBaseCellModel;

@interface GCBaseCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) GCBaseCellModel *bindCellModel;

+ (void)calculateLayoutIfNeed:(id)a0;

- (void)configureWithCellModel:(id)a0;
- (void).cxx_destruct;

@end
