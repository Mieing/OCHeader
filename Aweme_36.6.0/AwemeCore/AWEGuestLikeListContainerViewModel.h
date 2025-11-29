@class NSString, AWEGuestLikeListSectionViewModel, AWEGuestLikeListDataController, AWEGuestHomePageContext;

@interface AWEGuestLikeListContainerViewModel : AWEBaseListViewModel <AWEGuestLikeListDataControllerDelegate, AWEGuestModeMessage>

@property (retain, nonatomic) AWEGuestHomePageContext *pageContext;
@property (nonatomic) BOOL showLoading;
@property (retain, nonatomic) AWEGuestLikeListSectionViewModel *likeSectionVM;
@property (retain, nonatomic) AWEGuestLikeListDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (BOOL)loadMoreHasMore;
- (void)guestModeDidEnter;
- (void)guestModeDidLeave;
- (void)guestDidFinishFollowUser:(id)a0 isUnfollow:(BOOL)a1;
- (void)guestDidDiggAweme:(id)a0 isUndigg:(BOOL)a1;
- (void)handleDataStateChanged;
- (void)resetLikeListSection;
- (void)initFetchWithCompletion:(id)a0 error:(id)a1;
- (void)loadMoreWithCompletion:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
