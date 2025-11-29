@class UIViewController, NSString, UICollectionView, AWETeenExtraParamModel, AWETeenGeneralAuthorVideoCardModel;
@protocol AWETeenGeneralCellInteractionDelegate;

@interface AWETeenGeneralAuthorVideoPanelCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWETeenGeneralCellProtocol>

@property (retain, nonatomic) AWETeenGeneralAuthorVideoCardModel *model;
@property (weak, nonatomic) id<AWETeenGeneralCellInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct CGPoint { double x; double y; } beginDraggingOffset;
@property (nonatomic) long long beginDraggingIndex;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isAppearing;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSizeWithModel:(id)a0;

- (double)currPlaybackTime;
- (void)p_checkAutoPlay;
- (void)showLog;
- (long long)currPlayIndex;
- (void)seekToPlayIndex:(long long)a0;
- (id)visibleVideoControllers;
- (id)visibleSlidesViews;
- (void)p_recordBeginDraggingVelocity:(id)a0;
- (void)p_enterAuthorVCIfNeeded:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)p_fixTargetContentOffset:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)configWithModel:(id)a0 interactionDelegate:(id)a1 extraParam:(id)a2;
- (void)scrollToVideoWithItemID:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)play;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)pause;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)canPlay;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)reset;
- (void)seekToTime:(double)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
