@class NSMutableArray, GCCollectionViewManager, UICollectionView;

@interface GameKeyValueEditViewController : MMUIViewController

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) GCCollectionViewManager *viewManager;
@property (retain, nonatomic) NSMutableArray *keyValueArray;

- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
