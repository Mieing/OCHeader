@protocol DVEMultipleTrackCollectionViewDelegate;

@interface DVEMultipleTrackCollectionView : UICollectionView

@property (weak, nonatomic) id<DVEMultipleTrackCollectionViewDelegate> trackDelegate;

- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
