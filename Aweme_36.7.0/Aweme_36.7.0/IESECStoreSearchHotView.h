@class NSArray, UICollectionView, NSString, IESECStoreSearchHotHeader;
@protocol IESECStoreSearchHotViewDelegate;

@interface IESECStoreSearchHotView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) IESECStoreSearchHotHeader *headerView;
@property (retain, nonatomic) UICollectionView *contentCollectionView;
@property (copy, nonatomic) NSArray *dataSource;
@property (weak, nonatomic) id<IESECStoreSearchHotViewDelegate> delegate;
@property (nonatomic) BOOL showRefreshButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadHotWords:(id)a0;
- (id)p_hotIconImage:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
