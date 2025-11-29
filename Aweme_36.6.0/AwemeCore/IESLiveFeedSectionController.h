@class NSString, TabResponse, IESLiveFeedDrawerViewControllerContext, HTSEventContext, NSDate, NSArray, UIViewController;
@protocol IESLiveDrawerFeedControllerProtocol, IESLiveFeedDrawerSectionControllerDelegate;

@interface IESLiveFeedSectionController : IGListSectionController <IGListDisplayDelegate, IESLiveDrawerFeedControllerDelegate, IESLiveFeedViewControllerDelegate, IGListDiffable>

@property (retain, nonatomic) TabResponse *tabModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (retain, nonatomic) UIViewController<IESLiveDrawerFeedControllerProtocol> *feedViewController;
@property (retain, nonatomic) NSDate *beginRefreshDate;
@property (retain, nonatomic) NSDate *beginLoadMoreDate;
@property (nonatomic) BOOL isFirstLoad;
@property (nonatomic) BOOL isAppear;
@property (weak, nonatomic) id<IESLiveFeedDrawerSectionControllerDelegate> delegate;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;
@property (nonatomic) BOOL disableRefresh;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL isClickToAppear;
@property (nonatomic) long long targetIndex;
@property (nonatomic) double targetIndexMaskHeight;
@property (weak, nonatomic) NSArray *allSectionControllers;
@property (nonatomic) double clickedTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)cellForItemAtIndex:(long long)a0;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)refreshLayout:(BOOL)a0;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1;
- (void)listAdapter:(id)a0 willDisplaySectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)listAdapter:(id)a0 didEndDisplayingSectionController:(id)a1 cell:(id)a2 atIndex:(long long)a3;
- (void)updateRoomService:(id)a0;
- (void)trackAppear;
- (BOOL)canHideWithGesture;
- (void)sendDidSelectedSection;
- (id)initWithTabModel:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)updateCurrentVerticalInfo:(id)a0 roomId:(id)a1;
- (void)sendDidUnSelectedSection;
- (double)liveFeedTabDidClickedTime;
- (void)liveFeedDidEndRefresh:(BOOL)a0;
- (void)liveFeedDidEndLoadMore:(BOOL)a0;
- (void)liveFeedWillBeginRefresh;
- (void)liveFeedWillBeginLoadMore;
- (void)liveFeedViewControllerDidScroll:(id)a0;
- (void)liveFeedViewControllerDidScrollToTop:(id)a0;
- (void)liveFeedScrollViewWillBeginDragging:(id)a0;
- (void)liveFeedScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)liveFeedScrollViewDidEndDecelerating:(id)a0;
- (void)trackFirstShow:(id)a0;
- (void)trackRefresh;
- (void)trackLoadMore;
- (void).cxx_destruct;
- (void)refresh;
- (BOOL)isRefreshing;
- (BOOL)hasData;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
