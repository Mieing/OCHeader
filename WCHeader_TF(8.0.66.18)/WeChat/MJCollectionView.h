@interface MJCollectionView : UICollectionView

@property (copy, nonatomic) id /* block */ completion;

- (void)layoutSubviews;
- (void)reloadDataCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
