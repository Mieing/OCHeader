@interface AWEMVRevisitVideoController : AWEDCFeedBaseController

- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)revisitAvoidIfNeeded:(id)a0;
- (void)clearRevisitAvoidRecordIfNeeded:(id)a0;

@end
