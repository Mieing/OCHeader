@protocol AWEIMMixedImageDisplayCollectionViewDelegate;

@interface AWEIMMixedImageDisplayCollectionView : UICollectionView

@property (weak, nonatomic) id<AWEIMMixedImageDisplayCollectionViewDelegate> gestureDelegate;

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
