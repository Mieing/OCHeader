@class AWEDetailNewTrendMiddleDetailCollectView, AWEDetailNewTrendMiddleDetailTryPlayView;

@interface AWEDetailNewTrendMiddleDetailViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEDetailNewTrendMiddleDetailCollectView *detailCollectView;
@property (retain, nonatomic) AWEDetailNewTrendMiddleDetailTryPlayView *detailTryPlayView;
@property (copy, nonatomic) id /* block */ didCollectionItemActionBlock;
@property (copy, nonatomic) id /* block */ didUseItemActionBlock;
@property (copy, nonatomic) id /* block */ didTryPlayActionBlock;

- (void)handleTitleChange:(id)a0;
- (void)handleSubTitleChange:(id)a0;
- (void)handleIsSkeletonModeStatus:(BOOL)a0;
- (void)handleCoverPhotoUrlsChange:(id)a0;
- (void)handleIsMusicItemStatus:(BOOL)a0 isLunaMusicStatus:(BOOL)a1 isLunaMVStatus:(BOOL)a2;
- (void)handleIsHiddenLineViewStatusChange:(BOOL)a0;
- (void)handleIsCollectStatusChange:(BOOL)a0;
- (void)handleTypeChange:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
