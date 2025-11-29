@class UIView, NSString, AWEIMChatDetailEmptyView, AWEIMGroupOwnerMessagesListViewModel, UICollectionView, AWEIMMessageConversation, UICollectionReusableView, AWEIMNewChatDetailContext;
@protocol IESIMLoadingViewProtocol, AWEIMAssociateScrollViewDelegate;

@interface AWEIMGroupOwnerMessagesListViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWERouterViewControllerProtocol, AWEIMGroupOwnerMessagesListCollectionViewCellDelegate, AWEIMGroupOwnerMessagesListViewModelDelegate, AWEIMAssociateScrollViewProtocol>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMGroupOwnerMessagesListViewModel *viewModel;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (weak, nonatomic) UICollectionReusableView *headerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEIMChatDetailEmptyView *netErrorView;
@property (retain, nonatomic) AWEIMChatDetailEmptyView *emptyView;
@property (copy, nonatomic) NSString *navbarTitle;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMNewChatDetailContext *context;
@property (weak, nonatomic) id<AWEIMAssociateScrollViewDelegate> associateScrollDelegate;
@property (retain, nonatomic) UIView *headerBaseView;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)currentScrollView;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (void)backBtnClicked:(id)a0;
- (void)__showLoadingView;
- (void)__backBtnClicked;
- (void)__fetchData;
- (BOOL)isEmptyScrollView;
- (void)__addKVO;
- (void)__hideLoadingViewIfNeeded;
- (id)initWithConversation:(id)a0 viewModel:(id)a1;
- (void)__loadMore;
- (void)cellDidTapped:(id)a0;
- (void)didTappedAvatarWithUser:(id)a0;
- (void)cellDidUnfold:(id)a0;
- (void)cellDidFold:(id)a0;
- (void)__updateContentInset;
- (void)__updateEmptyWithHasMore:(BOOL)a0 error:(id)a1;
- (void)__endRefreshingWithNoreMore:(BOOL)a0;
- (void)didUpdateDataSourceAtIndex:(long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
