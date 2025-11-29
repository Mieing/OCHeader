@class MMTimer, MMFinderGameLiveWelfareCollectionViewModel, UICollectionView;

@interface MMFinderGameLiveWelfareTaskCollectionView : UIView

@property (retain, nonatomic) MMFinderGameLiveWelfareCollectionViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) long long autoScrollCurrentIndex;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) id /* block */ contentWidthDidChange;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateViewModel:(id)a0;
- (void)refreshWidth:(double)a0;
- (void)refreshWidthCurrentIndex:(long long)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (void)invokeAutoScroll;
- (void)scrollCollectionViewToNext;
- (void).cxx_destruct;

@end
