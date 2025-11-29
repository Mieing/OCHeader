@class NSArray, UICollectionView, AWEAwemeModel, UIView, NSString;
@protocol AWERichGoodsProgressViewDelegate;

@interface AWERichGoodsProgressView : UIView <UIGestureRecognizerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, AWERichGoodsProgressViewProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *progressMaskView;
@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long mainImagesCount;
@property (nonatomic) long long lastMainImageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWERichGoodsProgressViewDelegate> delegate;

- (void)updateProgressFromIndex:(long long)a0 toIndex:(long long)a1 method:(unsigned long long)a2;
- (void)updateWithContainerView:(id)a0 model:(id)a1;
- (void)reloadCollectionView;
- (void)caculateWithModel:(id)a0;
- (void)tapProgressView:(id)a0;
- (void)updateFirstCellWithToIndex:(long long)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (double)cellWidth;
- (void)setupUI;

@end
