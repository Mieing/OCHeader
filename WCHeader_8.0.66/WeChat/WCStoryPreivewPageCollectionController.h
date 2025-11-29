@class WCStoryDataUnit, NSString, WCStoryPreviewReportObj, UICollectionViewFlowLayout, NSHashTable, WCStoryPreviewPageView, UICollectionView, NSIndexPath;
@protocol MMUIViewControllerDelegate, WCStoryPreivewPageCollectionControllerDelegate, WCStoryPreviewPageViewDelegate;

@interface WCStoryPreivewPageCollectionController : MMObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionViewFlowLayout *m_collectionLayout;
    WCStoryPreviewPageView *m_playingPageView;
    double m_startContentOffsetX;
    double m_willEndContentOffsetX;
    NSHashTable *m_pageViewsToStop;
}

@property (nonatomic) BOOL voiceOverEnable;
@property (retain, nonatomic) NSIndexPath *willDisplayIndex;
@property (weak, nonatomic) id<WCStoryPreivewPageCollectionControllerDelegate> delegate;
@property (weak, nonatomic) id<WCStoryPreviewPageViewDelegate> pageViewDelegate;
@property (weak, nonatomic) id<MMUIViewControllerDelegate> vcDelegate;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct CGSize { double width; double height; } screenSize;
@property (retain, nonatomic) WCStoryDataUnit *dataUnit;
@property (nonatomic) BOOL needFixContentOffset;
@property (nonatomic) BOOL resetToFirstPageWhenUpdateData;
@property (nonatomic) BOOL isAllMuted;
@property (nonatomic) BOOL isPlayingVideo;
@property (nonatomic) BOOL enableDragToClose;
@property (nonatomic) BOOL canDeleteMyOwnStory;
@property (readonly, nonatomic) WCStoryPreviewPageView *currentPageView;
@property (readonly, nonatomic) NSIndexPath *currentIndexPath;
@property (retain, nonatomic) WCStoryPreviewReportObj *reportObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCollectionView;
- (void)updateCollectionViewFrame;
- (void)resumePlayer;
- (void)stopAllPlayer;
- (void)tryShowCommentsList;
- (void)voiceOverElementEnable:(BOOL)a0;
- (void)scrollToIndexPath:(id)a0 animated:(BOOL)a1;
- (void)reloadCollectionView;
- (void)fixContentOffset;
- (void)tilePages;
- (void)changeToPlayingPageView:(id)a0;
- (void)addSafeStopPageView:(id)a0;
- (void)clearAllPageView;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
