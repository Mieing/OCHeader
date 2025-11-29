@class AWEGuestFollowFeedViewHolder, NSString;

@interface AWEGuestFollowFeedController : AWEBaseController <AWEFeedControllerProtocol, AWEGuestModeMessage>

@property (retain, nonatomic) AWEGuestFollowFeedViewHolder *viewHolder;
@property (nonatomic) BOOL emptyPageHidden;
@property (nonatomic) BOOL needsRefreshFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)viewDidLoadAfterTableviewSetup;
- (void)setupBinding;
- (void)refreshFeedIfNeeded;
- (void)guestDidFinishFollowUser:(id)a0 isUnfollow:(BOOL)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)dealloc;
- (void)setupNotifications;

@end
