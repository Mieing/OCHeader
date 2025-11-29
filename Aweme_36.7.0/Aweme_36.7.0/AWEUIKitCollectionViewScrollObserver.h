@class UICollectionView;

@interface AWEUIKitCollectionViewScrollObserver : NSObject

@property (nonatomic) UICollectionView *awe_collectionView;
@property (nonatomic) BOOL awe_hasObserved;
@property (copy, nonatomic) id /* block */ didScrollBlock;

- (void).cxx_destruct;
- (id)initWithCollectionView:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
