@class NSString, UICollectionView, IESECShopSearchHistoryHeader, NSMutableArray;
@protocol IESECShopSearchHistoryViewDelegate;

@interface IESECShopSearchHistoryView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESECShopSearchHistoryLayoutDelegate>

@property (retain, nonatomic) IESECShopSearchHistoryHeader *headerView;
@property (retain, nonatomic) UICollectionView *contentCollectionView;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL foldSearchHistory;
@property (nonatomic) BOOL editing;
@property (weak, nonatomic) id<IESECShopSearchHistoryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadHistoryWords:(id)a0;
- (struct CGSize { double x0; double x1; })flowLayout:(id)a0 sizeForItemAtIndexPath:(id)a1;
- (void)flowLayout:(id)a0 updateLayouts:(id)a1 section:(long long)a2;
- (void)flowLayout:(id)a0 updateContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)createViewModelForSearchWord:(id)a0;
- (void)reloadHistoryWordsDataSource;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finishEditing;
- (void)setupViews;

@end
