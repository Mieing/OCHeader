@class NSMutableDictionary, CAShapeLayer, NSMutableSet, NSString, WCAdURLImageView;
@protocol WCTimeLineAdLookbookCollectionViewDelegate;

@interface WCTimeLineAdLookbookCollectionView : UICollectionView <WCTimeLineAdLookbookCardCellViewDelegate, WCCanvasPageViewAnimationProtocol, WCTimeLineAdLookbookCardMediaViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *mediaViewCache;
@property (weak, nonatomic) id<WCTimeLineAdLookbookCollectionViewDelegate> lookbookDelegate;
@property (retain, nonatomic) NSMutableSet *lastVisibleIndexPaths;
@property (retain, nonatomic) WCAdURLImageView *charmImageView;
@property (retain, nonatomic) CAShapeLayer *brandNewMediaMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)layoutSubviews;
- (void)organizeContentViews;
- (void)getReadyForBrandNewAnimation;
- (void)cleanUpWhileBrandNewAnimationDone;
- (void)shutdownAllVideos;
- (void)setVideosControlViewHidden:(BOOL)a0;
- (id)fetchLookbookCardInfo;
- (id)fetchMediaViewForIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })fetchMediaViewSizeForIndex:(unsigned long long)a0;
- (void)onCellButtonClickedForIndex:(unsigned long long)a0 originView:(id)a1;
- (id)fetchLookbookReportItemForIndex:(unsigned long long)a0;
- (BOOL)onCellViewShouldHideItemTitleForIndex:(unsigned long long)a0;
- (BOOL)isBrandNewAnimationPlaying;
- (void)onCanvasPageViewAnimationSetContentHidden:(BOOL)a0;
- (BOOL)onMediaViewShouldForbidShowingPauseIcon;
- (void)cellsExposureProcess;
- (void).cxx_destruct;

@end
