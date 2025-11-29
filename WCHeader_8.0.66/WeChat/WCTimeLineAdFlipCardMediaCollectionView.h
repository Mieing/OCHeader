@protocol WCTimeLineAdFlipCardMediaCollectionViewDelegate;

@interface WCTimeLineAdFlipCardMediaCollectionView : UICollectionView

@property (weak, nonatomic) id<WCTimeLineAdFlipCardMediaCollectionViewDelegate> mediaDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)parseTouchesLocationsFor:(id)a0;
- (void).cxx_destruct;

@end
