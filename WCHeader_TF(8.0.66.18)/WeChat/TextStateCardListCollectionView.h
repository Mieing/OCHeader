@protocol TextStateCardListCollectionGestureDelegate;

@interface TextStateCardListCollectionView : UICollectionView

@property (weak, nonatomic) id<TextStateCardListCollectionGestureDelegate> gestureDelegate;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
