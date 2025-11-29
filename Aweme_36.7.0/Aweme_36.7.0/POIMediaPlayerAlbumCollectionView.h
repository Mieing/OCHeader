@interface POIMediaPlayerAlbumCollectionView : UICollectionView

@property (nonatomic) BOOL hasCustomRightSlideAction;

- (BOOL)shouldIgnoreGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
