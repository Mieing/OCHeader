@class NSString, UICollectionView, AWENewVideoCoverEditTemplateViewModel, UICollectionViewFlowLayout, NSDictionary;
@protocol AWEVideoCoverImageTemplateListContentViewDelegate;

@interface AWEVideoCoverImageTemplateListContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, AWEVideoCoverImageTemplateListContentCellDelegate, AWEVideoCoverImageHistoryContentCellDelegate>

@property (retain, nonatomic) UICollectionView *templateCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) AWENewVideoCoverEditTemplateViewModel *viewModel;
@property (retain, nonatomic) NSDictionary *showModelHastracked;
@property (retain, nonatomic) NSString *currentEnterType;
@property (weak, nonatomic) id<AWEVideoCoverImageTemplateListContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupConstraint;
- (void)scrollToIndexPath:(id)a0 animated:(BOOL)a1;
- (void)p_trackVisibleTemplateCell;
- (void)templateApplyTemplateSuccessForIndexPath:(id)a0;
- (void)p_updateTabSelection:(id)a0;
- (void)p_viewStopScrolling:(id)a0;
- (id)visibleTemplateCellIndexPaths;
- (BOOL)needTemplateHistory;
- (void)cellShowComplianceNotificationAndAuthorInfoAndClearBtnStatusWith:(id)a0;
- (void)cell:(id)a0 didSelectForIndexPath:(id)a1 model:(id)a2;
- (void)historyCellShowComplianceNotificationAndAuthorInfoAndClearBtnStatusWith:(id)a0;
- (void)historyCell:(id)a0 didEndDisplayAtIndexPath:(id)a1 model:(id)a2;
- (void)historyCell:(id)a0 didSelectForIndexPath:(id)a1 model:(id)a2;
- (void)historyCellForNextAction:(id)a0;
- (void)cell:(id)a0 didEndDisplayAtIndexPath:(id)a1 model:(id)a2;
- (void)cellForNextAction:(id)a0;
- (void)p_trackTemplateWhenShowsWithIndexPath:(id)a0;
- (void)templateImageDoSelectForIndexPath:(id)a0 isHistory:(BOOL)a1;
- (void)p_trackTemplateShowWith:(id)a0 model:(id)a1;
- (void)trackVisibleTemplateCell;
- (void)markEnterType:(id)a0 atIndex:(id)a1;
- (void)p_setupUI;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
