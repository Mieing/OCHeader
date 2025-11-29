@class UICollectionView, NSDate, IESLiveFeedDrawerViewControllerContext, UILabel, IGListAdapter, MJRefreshHeader, IESLiveVSFeedChainDataSource, IESLiveFeedLoadMoreFooter, IESLiveErrorPlaceholderView, NSString, IESLiveWebpLoadingView, IESLiveEmptyView, UIImageView;

@interface IESLiveVSFeedChainViewController : UIViewController <IESLiveVSFeedChainDataSourceDelegate, IESLiveDrawerFeedContainerProtocol>

@property (retain, nonatomic) IGListAdapter *adapter;
@property (retain, nonatomic) IESLiveVSFeedChainDataSource *dataSource;
@property (nonatomic) unsigned long long requestStatus;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MJRefreshHeader *refreshHeader;
@property (retain, nonatomic) IESLiveFeedLoadMoreFooter *loadMoreFooter;
@property (retain, nonatomic) IESLiveEmptyView *errorView;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) IESLiveErrorPlaceholderView *emptyView;
@property (retain, nonatomic) NSDate *feedDrawerEntranceClickTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL disableRefresh;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;

- (void)didSetAttachingDIContext;
- (void)loadMoreData;
- (void)trackAppear;
- (BOOL)canHideWithGesture;
- (void)refreshConstrains;
- (void)updateEntranceClickTime:(id)a0;
- (void)dataSource:(id)a0 status:(unsigned long long)a1 hasMore:(BOOL)a2;
- (id)emptyViewForDataSource:(id)a0;
- (void)updateFeedDrawerViewControllerUI;
- (void)showOrHideTitleLabel:(BOOL)a0;
- (void)srollToUP;
- (double)ipadForLabel;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupSubviews;
- (void)setupAccessibility;
- (void)refreshData;
- (void)reloadWithCompletion:(id /* block */)a0;

@end
