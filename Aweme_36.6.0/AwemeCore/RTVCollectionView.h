@protocol RTVCollectionViewDelegate;

@interface RTVCollectionView : UICollectionView

@property (weak, nonatomic) id<RTVCollectionViewDelegate> rtvDelegate;

- (void).cxx_destruct;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;

@end
