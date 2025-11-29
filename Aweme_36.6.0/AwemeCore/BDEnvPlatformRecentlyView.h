@class UILabel, UICollectionView;
@protocol UICollectionViewDelegate, UICollectionViewDataSource;

@interface BDEnvPlatformRecentlyView : UIView

@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) id<UICollectionViewDelegate> delegate;
@property (weak, nonatomic) id<UICollectionViewDataSource> dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;

- (void).cxx_destruct;
- (id)init;
- (void)setupView;

@end
