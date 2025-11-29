@class IESECTracker, IESECFullLoadingView, NSString, IESECCommentShowConfig, IESECGoodsCommentHeader, IESECCommentShowDatasource, UICollectionView, IESECCommentShowDataManager;

@interface IESECCommentShowViewController : UIViewController <UICollectionViewDelegate, IESECGoodsCommentHeaderActionDelegate>

@property (nonatomic) BOOL isNeedRefresh;
@property (retain, nonatomic) IESECGoodsCommentHeader *headerView;
@property (retain, nonatomic) UICollectionView *mainCollectionView;
@property (retain, nonatomic) IESECCommentShowDataManager *dataManager;
@property (retain, nonatomic) IESECCommentShowDatasource *datasource;
@property (retain, nonatomic) IESECFullLoadingView *loadingView;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECCommentShowConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapClose;
- (void)dismissLoading;
- (void)showEmptyPage;
- (void)showNormalPage;
- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)endRefresh;
- (void)showErrorPage;
- (id)iesec_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })iesec_emptyPageEdgeInsets;
- (void)tapShare;
- (void)tapShoppingCart;
- (void)trackPageEnterAfterLoadData;
- (void)getInitDataWithCompltion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)refreshData;
- (void)showLoading;
- (long long)numberOfComments;

@end
