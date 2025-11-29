@class NSString, AFDCloseFriendsSettingsPanelListSectionDataController, AFDCloseFriendsSettingsPanelListSectionViewModel, NSMutableSet, NSArray, NSObject, AFDCloseFriendsMomentContext;
@protocol AWEContactLocalSearchManagerProtocol, AFDCloseFriendsSettingsPanelStrategyProtocol;

@interface AFDCloseFriendsSettingsPanelListViewModel : AWEBaseListViewModel <AWEUserMessage>

@property (retain, nonatomic) AFDCloseFriendsSettingsPanelListSectionDataController *dataController;
@property (nonatomic) long long friendsCount;
@property (nonatomic) long long selectedCount;
@property (retain, nonatomic) NSMutableSet *selectedUserIDsSet;
@property (retain, nonatomic) NSMutableSet *modifiedUserIDsSet;
@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchFriendsManager;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) BOOL hiddenEmpty;
@property (nonatomic) BOOL hiddenError;
@property (nonatomic) BOOL showLoadMoreFooter;
@property (nonatomic) BOOL didShowListData;
@property (retain, nonatomic) AFDCloseFriendsSettingsPanelListSectionViewModel *cfSectionViewModel;
@property (retain, nonatomic) AFDCloseFriendsSettingsPanelListSectionViewModel *friendSectionViewModel;
@property (retain, nonatomic) AFDCloseFriendsSettingsPanelListSectionViewModel *searchSectionViewModel;
@property (nonatomic) long long searchResultCount;
@property (nonatomic) BOOL showSearching;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) AFDCloseFriendsMomentContext *context;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *containerPreviousPage;
@property (readonly, nonatomic) NSArray *selectedUserModelIds;
@property (retain, nonatomic) NSObject<AFDCloseFriendsSettingsPanelStrategyProtocol> *currentStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void)bindObserver;
- (void)updateCloseFriendWithCompletion:(id /* block */)a0;
- (BOOL)isSelectedWithUserID:(id)a0;
- (BOOL)isEnabledWithUser:(id)a0;
- (BOOL)didSelectUser:(id)a0;
- (void)updateSectionsFromSearch:(BOOL)a0;
- (void)p_setUpSelectedUserSetWithList:(id)a0;
- (void)generateSectionsWithListData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)searchWithText:(id)a0;

@end
