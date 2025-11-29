@class NSIndexPath, GC23070Report, UICollectionViewCell;
@protocol GCBaseCellModelDelegate;

@interface GCBaseCellModel : NSObject

@property (retain, nonatomic) GC23070Report *bindReport;
@property (retain, nonatomic) GC23070Report *bindExplosureReport;
@property (weak, nonatomic) UICollectionViewCell *gcBindCell;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (copy, nonatomic) id /* block */ willDisplayBlock;
@property (weak, nonatomic) id<GCBaseCellModelDelegate> cellModelDelegate;
@property (nonatomic) BOOL hasCallLayoutBefore;
@property (nonatomic) BOOL reported;
@property (retain, nonatomic) NSIndexPath *indexPath;

- (void)setExplosureDataReportWithKey:(id)a0 uniqueId:(id)a1 configBlock:(id /* block */)a2;
- (void)setDataReportWithKey:(id)a0 uniqueId:(id)a1 configBlock:(id /* block */)a2;
- (void)configureReportModel:(id)a0;
- (void)onGetBindReport:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)callCellConfigIfBaseCell;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)cellReuseIdentifier;
- (Class)bindCellClass;
- (void)calculateLayoutIfNeed;
- (double)fitCollectionViewWidth:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)reconfigCell;
- (void)reconfigCellWithoutInvalidateLayout;
- (void)clearCachedLayoutInfo;
- (void)handleLongPress:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
