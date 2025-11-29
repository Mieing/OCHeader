@class AWEIMExpandCollectionListModel, AWEIMExpandCollectionView;

@interface AWEIMExpandCollectionAutoScrollComponent : NSObject

@property (retain, nonatomic) AWEIMExpandCollectionView *collectionView;
@property (retain, nonatomic) AWEIMExpandCollectionListModel *listModel;
@property (nonatomic) BOOL enable;
@property (nonatomic) double interval;

- (void)resetToMiddle;
- (void)resetToMiddelNeedLayout:(BOOL)a0;
- (double)cellWidthWithScrollView:(id)a0;
- (double)sectionInsetCausedOffset;
- (void)p_scrollViewDidEndScrolling:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)stop;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)start;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollToNext;

@end
