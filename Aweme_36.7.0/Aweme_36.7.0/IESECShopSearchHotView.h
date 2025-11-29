@class NSArray, UICollectionView, NSString, IESECShopSearchHotHeader;
@protocol IESECShopSearchHotViewDelegate;

@interface IESECShopSearchHotView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESECShopSearchHistoryLayoutDelegate>

@property (retain, nonatomic) IESECShopSearchHotHeader *headerView;
@property (retain, nonatomic) UICollectionView *contentCollectionView;
@property (copy, nonatomic) NSArray *dataSource;
@property (nonatomic) unsigned long long currentCount;
@property (weak, nonatomic) id<IESECShopSearchHotViewDelegate> delegate;
@property (nonatomic) BOOL showRefreshButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadHotWords:(id)a0;
- (struct CGSize { double x0; double x1; })flowLayout:(id)a0 sizeForItemAtIndexPath:(id)a1;
- (void)flowLayout:(id)a0 updateLayouts:(id)a1 section:(long long)a2;
- (void)flowLayout:(id)a0 updateContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)p_hotIconImageName:(unsigned long long)a0;
- (id)p_hotIconImage:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
