@class NSIndexPath;

@interface AWEDCFeedAdjustFrameController : AWEDCFeedBaseController

@property (retain, nonatomic) NSIndexPath *seletedIndexPath;
@property (retain, nonatomic) NSIndexPath *targetIndexPath;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)classNameWithReferString;
- (void)adjustCellPositionWithIndexPath:(id)a0;
- (void).cxx_destruct;

@end
