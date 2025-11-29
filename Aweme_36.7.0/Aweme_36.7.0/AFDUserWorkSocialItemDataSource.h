@class AFDUserWorkSocialItemContext, NSString, NSDictionary, UIViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AFDUserWorkSocialItemDataSource : NSObject <AWEAwemeDetailTableViewControllerDelegate, AWEUserMessage, AWEZoomTransitionOuterContextProvider, AFDUserWorkCollectionViewDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AFDUserWorkSocialItemContext *context;
@property (nonatomic) BOOL isRequestingAweme;
@property (weak, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *awemeDetailViewController;
@property (nonatomic) BOOL hasStory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishApproveUserFollowRequest:(id)a0 error:(id)a1;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)didReceiveFollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)detailTableViewControllerDidAppear:(id)a0 currentAwemeModel:(id)a1;
- (long long)numberOfCellsForUserWorkCollectionView:(id)a0;
- (id)userWorkCollectionView:(id)a0 cellViewModelAtIndex:(long long)a1;
- (void)userWorkCollectionView:(id)a0 didSelectCellAtIndex:(long long)a1 cellViewModel:(id)a2;
- (void)p_clearStoryAwemeIfNeeded;
- (void)p_requestAweme:(BOOL)a0;
- (id)p_cellViewModelForAweme:(id)a0;
- (id)p_cellViewModelForStory:(id)a0;
- (void)p_transferToAwemeDetail:(id)a0 index:(long long)a1;
- (void)p_clickStory:(id)a0 index:(long long)a1;
- (long long)p_cellIndexForAweme:(id)a0;
- (id)p_visibleAwemeList;
- (void)p_syncAwemeFollowStatus:(id)a0;
- (id)p_visibleAwemeForItem:(id)a0;
- (void)p_syncUserFollowStatus:(id)a0;
- (void)p_enumerateStoryListUsingBlock:(id /* block */)a0;
- (void)p_onRequestAwemeError:(id)a0 needToast:(BOOL)a1;
- (void)p_onRequestAwemeSuccess:(id)a0 needToast:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
