@class AWEFindFriendsContactsSectionViewModel, AWEFindFriendsQuickAccessSectionViewModel, AWEFindFriendsQRCodeSectionViewModel, AWEFindFriendsContext, AWEUserRecommendPerformanceMeasureTask, AWEFindFriendsVerticalFunctionListSectionViewModel, AWEBaseListSectionViewModel, AWEFindFriendsSearchSectionViewModel;
@protocol AWEUserRecommendSectionViewModelProtocol;

@interface AWEFindFriendsViewModel : AWEBaseListViewModel

@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL recommendSectionHasShown;
@property (nonatomic) BOOL isCurrentRecommendClose;
@property (nonatomic) unsigned long long exceptionType;
@property (nonatomic) BOOL hasUploadedAddressBook;
@property (retain, nonatomic) AWEFindFriendsSearchSectionViewModel *searchFriendsSectionViewModel;
@property (retain, nonatomic) AWEBaseListSectionViewModel<AWEUserRecommendSectionViewModelProtocol> *userRecommendSectionViewModel;
@property (retain, nonatomic) AWEBaseListSectionViewModel *goldCollectContactsSectionViewModel;
@property (retain, nonatomic) AWEFindFriendsVerticalFunctionListSectionViewModel *verticalListSectionViewModel;
@property (retain, nonatomic) AWEFindFriendsQRCodeSectionViewModel *QRSectionViewModel;
@property (retain, nonatomic) AWEFindFriendsContactsSectionViewModel *contactsViewModel;
@property (retain, nonatomic) AWEFindFriendsQuickAccessSectionViewModel *quickAccessViewModel;
@property (retain, nonatomic) AWEUserRecommendPerformanceMeasureTask *refreshPerformanceTask;
@property (retain, nonatomic) AWEUserRecommendPerformanceMeasureTask *loadMorePerformanceTask;
@property (retain, nonatomic) AWEFindFriendsContext *context;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL viewHasAppeared;
@property (nonatomic) BOOL scrollEnabled;

+ (Class)aAWEUserProfileModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEUserRecommendModuleServiceDOUYINLiteAdaperClass;

- (void)setupViewModel;
- (void)trackListDismissedBeforeAppear;
- (void)setupBinding;
- (void)fetchListData:(id /* block */)a0;
- (id)aAWEUserProfileModuleServiceDOUYINLiteAdaper;
- (id)p_recommendManagerContext;
- (void)checkShouldShowUploadAddressBook;
- (id)aAWEUserRecommendModuleServiceDOUYINLiteAdaper;
- (void)didScrollList;
- (BOOL)p_enableFetchRecommendData;
- (void)p_updateExceptionType;
- (void)constructSectionArray;
- (BOOL)p_enableFetchQRCodeAfterFetchEmptyRecommend;
- (void)p_replaceContactSection;
- (void)trackFamiliarEmpty;
- (void)trackClickProfileTipURL;
- (BOOL)enablePrivacyReminder;
- (void).cxx_destruct;

@end
