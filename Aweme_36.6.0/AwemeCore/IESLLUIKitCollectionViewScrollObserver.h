@class UICollectionView;

@interface IESLLUIKitCollectionViewScrollObserver : NSObject

@property (weak, nonatomic) UICollectionView *iesll_collectionView;
@property (nonatomic) BOOL iesll_hasObserved;
@property (copy, nonatomic) id /* block */ didScrollBlock;

- (void).cxx_destruct;
- (id)initWithCollectionView:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
