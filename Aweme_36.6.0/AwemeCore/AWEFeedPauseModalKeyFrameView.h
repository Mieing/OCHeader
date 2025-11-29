@class AWEAwemeModel, NSString, UIView, NSMutableDictionary, UIImageView, AWEBigThumbModel, AWEFeedProgressRefinedFrameSelectionCollectionView, NSNumber;
@protocol AWEPlayInteractionProgressPauseModalProtocol;

@interface AWEFeedPauseModalKeyFrameView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) UIView *frameSelectionContainerView;
@property (retain, nonatomic) AWEFeedProgressRefinedFrameSelectionCollectionView *frameSelectionCollectionView;
@property (retain, nonatomic) UIView *frameSelectionBorderView;
@property (retain, nonatomic) UIImageView *frameSelectionImageView;
@property (nonatomic) BOOL isFrameSelectionCollectionViewScrolling;
@property (nonatomic) BOOL isFrameSelectionCollectionDidSelect;
@property (retain, nonatomic) NSNumber *playbackTimeWhenLeave;
@property (weak, nonatomic) id<AWEPlayInteractionProgressPauseModalProtocol> progressController;
@property (retain, nonatomic) NSMutableDictionary *thumbCellConfigBlockDic;
@property (retain, nonatomic) NSMutableDictionary *engineBigImageDict;
@property (retain, nonatomic) NSMutableDictionary *requestBigThumbDict;
@property (retain, nonatomic) AWEBigThumbModel *dashThumbModel;
@property (nonatomic) BOOL isRequestThumbnail;
@property (nonatomic) BOOL isGetThumbnail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopScroll;
- (struct CGPoint { double x0; double x1; })maxContentOffset;
- (id)fakeProgressSlider;
- (void)updateWithModel:(id)a0 progressController:(id)a1 referString:(id)a2;
- (void)scrollToCurrentCell;
- (void)scrollToSeekTime:(double)a0;
- (long long)getTotalThumbImageCount;
- (id)configCellForNewThumbnailLogicWithIndexPath:(id)a0;
- (void)addThumbCellConfigBlockWithKey:(id)a0 value:(id)a1;
- (void)newGetVideoPreviewImageIndex:(long long)a0 completion:(id /* block */)a1;
- (void)trackClickFrameSelectionCell;
- (long long)getProgressThumbOrder;
- (BOOL)isNewThumbnailData;
- (id)getThumbnailImgUrlByModel:(id)a0 index:(long long)a1;
- (void)trackGetThumbnailWithError:(id)a0 duration:(long long)a1;
- (BOOL)enableNewThumbnailLogic;
- (id)createCollectionViewFlowLayout;
- (id)configCellForCommonThumbnailLogicWithIndexPath:(id)a0;
- (double)getThumbImageInterval;
- (BOOL)useCommonThumbnailLogic;
- (id)dashThumbInfo;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (id)progressSlider;

@end
