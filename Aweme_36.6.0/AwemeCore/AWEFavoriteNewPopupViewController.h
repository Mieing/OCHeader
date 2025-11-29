@class UIView, NSString, AWEAwemeModel, AWEFavoriteFileDataController, AWEFavoriteGetNewFileView, UIButton, NSMutableArray, NSDictionary, UICollectionView, NSNumber, UILabel;

@interface AWEFavoriteNewPopupViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIView *handleView;
@property (retain, nonatomic) UILabel *chooseLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) AWEFavoriteGetNewFileView *getNewFileButton;
@property (nonatomic) BOOL hasGetData;
@property double collectionViewContentOffsetY;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *collectsIdFrom;
@property (retain, nonatomic) NSMutableArray *itemIDArray;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *fromTabs;
@property (retain, nonatomic) NSNumber *videoTime;
@property double playTime;
@property (nonatomic) BOOL shouldBlockNoticeView;
@property (nonatomic) BOOL shouldShowAddToSeeLaterLabel;
@property (nonatomic) BOOL shouldControlByChainAction;
@property (nonatomic) BOOL isFromRedFavoriteTramsferButton;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *toastType;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) id /* block */ networkCompletionBlock;
@property (nonatomic) BOOL needUseCombineRequest;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ endFavoriteAddToFilePopupPromise;
@property (retain, nonatomic) UICollectionView *favoriteFileCollectionView;
@property (retain, nonatomic) AWEFavoriteFileDataController *favoriteFileDataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelButtonClick;
- (void)loadMoreData;
- (void)trackAddFavoriteFolderClickWithIndexPath:(id)a0 clickPosition:(id)a1;
- (void)trackFavoritePanalShow;
- (void)trackCreateNewFileClick;
- (void)updateDatacontroller;
- (void)trackFavoritePanalSlideRight;
- (void)didCollectionViewCellClick:(id)a0 shouldShowSuccessHint:(BOOL)a1 withHasBottomBar:(BOOL)a2;
- (void)favoriteAddNewFilePopupViewShow;
- (void)addNewFileRequestForDefaultFolder;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)refreshData;
- (void)setUpUI;

@end
