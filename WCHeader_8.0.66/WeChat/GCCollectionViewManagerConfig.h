@class UICollectionView;

@interface GCCollectionViewManagerConfig : NSObject

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (nonatomic) BOOL supportLongPress;
@property (nonatomic) double customPageSize;

- (void).cxx_destruct;

@end
