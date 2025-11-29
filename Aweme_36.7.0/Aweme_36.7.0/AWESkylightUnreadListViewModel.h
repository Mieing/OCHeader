@class AWESkylightOftenWatchSectionViewModel, AWESkylightMoreAuthorSectionViewModel, AWEEmptyPageSectionViewModel, AWESkylightUnreadSearchBarSectionViewModel, NSArray, AWESkylightUnreadSearchSectionViewModel, NSString, AWESkylightUserUpdateDataController;

@interface AWESkylightUnreadListViewModel : AWECommonUserListViewModel <AWEUserMessage, AWEConcernRecentUpdateUnreadListPageHandlerProtocol>

@property (retain, nonatomic) AWESkylightUnreadSearchBarSectionViewModel *searchBarViewModel;
@property (retain, nonatomic) AWESkylightUnreadSearchSectionViewModel *searchViewModel;
@property (retain, nonatomic) AWESkylightOftenWatchSectionViewModel *oftenWatchViewModel;
@property (retain, nonatomic) AWESkylightMoreAuthorSectionViewModel *moreAuthorViewModel;
@property (retain, nonatomic) AWEEmptyPageSectionViewModel *emptyVM;
@property (retain, nonatomic) NSArray *sectionComponents;
@property (retain, nonatomic) AWESkylightUserUpdateDataController *dataController;
@property (retain, nonatomic) NSArray *oftenWatchList;
@property (retain, nonatomic) NSArray *moreAuthorList;
@property (retain, nonatomic) NSArray *loadMoreList;
@property (nonatomic) BOOL loadmoreHasMore;
@property (retain, nonatomic) NSString *lastUserID;
@property (nonatomic) BOOL hadShowSpecialFollowToast;
@property (nonatomic) BOOL scrollDirectTop;
@property (nonatomic) long long oftenWatchScrollToIndex;
@property (nonatomic) long long moreAuthorScrollToIndex;
@property (readonly, nonatomic) BOOL hasMore;
@property (nonatomic) BOOL searching;
@property (nonatomic) BOOL isSpecialFollow;
@property (copy, nonatomic) NSArray *skylightDisplayedUserIDs;
@property (retain, nonatomic) NSString *noticeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (void)didSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)didCancelSpecialFollowWithUser:(id)a0 error:(id)a1;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (id)enterFrom;
- (unsigned long long)getEnterFrom;
- (void)addBinding;
- (BOOL)hiddenMJFooter;
- (id)currentUnreadUserIDList;
- (BOOL)noMoreUserData;
- (void)loadMoreUnreadUserWithCompletion:(id /* block */)a0;
- (id)userModelWithUserID:(id)a0;
- (BOOL)autoContinuousPlay;
- (void)scrollDidEndWithUserModel:(id)a0;
- (void)willChangeVideo:(id)a0 userModel:(id)a1 directTop:(BOOL)a2;
- (Class)emptyCellClass;
- (void)trackAccuracyCheckIfNeed;
- (BOOL)showEmpty;
- (void)loadMoreSectionDataWithCompletion:(id /* block */)a0;
- (void)showUnreadDetailWithModel:(id)a0;
- (id)totalModelArray;
- (void).cxx_destruct;
- (void)fetchData;
- (void)dealloc;
- (id)previousPage;
- (id /* block */)willDisappearBlock;

@end
