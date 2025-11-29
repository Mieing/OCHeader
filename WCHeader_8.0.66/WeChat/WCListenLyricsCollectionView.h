@interface WCListenLyricsCollectionView : ICCollectionView

@property (copy, nonatomic) id /* block */ reloadDataCompletionBlock;

- (void)reloadDataWithCompletionBlock:(id /* block */)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
