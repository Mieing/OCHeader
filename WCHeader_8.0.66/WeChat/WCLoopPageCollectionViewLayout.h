@protocol WCLoopPageCollectionViewLayoutDelegate;

@interface WCLoopPageCollectionViewLayout : UICollectionViewFlowLayout

@property (weak, nonatomic) id<WCLoopPageCollectionViewLayoutDelegate> delegate;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;

@end
