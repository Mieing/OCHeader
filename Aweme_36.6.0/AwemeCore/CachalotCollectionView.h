@class CachalotCollectionViewConfig, NSValue, CachalotAsyncTaskSerialController;
@protocol CachalotRenderPipelineComponentViewModel, CachalotCollectionViewLayoutDelegate;

@interface CachalotCollectionView : UICollectionView

@property (retain, nonatomic) CachalotCollectionViewConfig *config;
@property (nonatomic) BOOL isLockingContentOffset;
@property (nonatomic) BOOL adjustContentSizeWithLockingValue;
@property (nonatomic) BOOL adjustContentOffsetWithLockingValue;
@property (nonatomic) BOOL enableHandleBeforeSetContentOffset;
@property (nonatomic) BOOL enableContentSizeAdjustLessThanCardRequired;
@property (retain, nonatomic) NSValue *lockingContentOffsetValue;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> lockingViewModel;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> clipingViewModel;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> offsetStickViewModel;
@property (nonatomic) BOOL duringLayout;
@property (retain, nonatomic) CachalotAsyncTaskSerialController *serialController;
@property (weak, nonatomic) id<CachalotCollectionViewLayoutDelegate> layoutDelegate;

- (id)initWithConfig:(id)a0 layout:(id)a1;
- (struct CGPoint { double x0; double x1; })customHandleBeforeSetContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)enableAdjustContentSize:(BOOL)a0;
- (void)enableContentSizeAdjustLessThanCardRequired:(BOOL)a0;
- (void)updateClipToViewModel:(id)a0 hidingOffest:(double)a1;
- (void)updateOffsetStickViewModel:(id)a0 stickOffsetToOriginY:(double)a1;
- (void)enableAdjustContentOffset:(BOOL)a0;
- (void)updateLockingContentOffsetValue:(id)a0;
- (void)updateLockingViewModel:(id)a0;
- (void)unlockContentOffset;
- (void)enableHandleBeforeSetContentOffset:(BOOL)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)lockContentOffset;

@end
