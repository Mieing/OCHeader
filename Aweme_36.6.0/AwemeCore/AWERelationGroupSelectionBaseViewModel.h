@class NSMutableArray, NSArray, NSString, AWERelationFollowMemberSelectionBaseDataController, NSObject, NSNumber;
@protocol AWEContactLocalSearchManagerProtocol;

@interface AWERelationGroupSelectionBaseViewModel : AWEBaseViewModel

@property (retain) NSArray *dataSource;
@property (retain) NSArray *searchList;
@property (retain) NSArray *sectionHeaderTitles;
@property (retain) NSArray *sectionIndexForTitles;
@property (copy) NSString *updateUid;
@property BOOL firstLoading;
@property BOOL isLoading;
@property BOOL isRefreshing;
@property BOOL hasError;
@property BOOL searchCompleted;
@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) AWERelationFollowMemberSelectionBaseDataController *dataController;
@property (retain, nonatomic) NSObject<AWEContactLocalSearchManagerProtocol> *searchManager;
@property (retain, nonatomic) NSArray *groupsArray;
@property (retain, nonatomic) NSArray *currentGroupUids;
@property long long currentGroupIndex;
@property (copy) NSString *enterFrom;
@property (copy) NSString *previousPage;
@property (retain) NSNumber *groupID;
@property (copy) NSString *groupName;
@property BOOL needFetchUids;
@property (retain) NSMutableArray *containerUsers;

- (BOOL)enableSearchBar;
- (void)updateParams:(id)a0;
- (BOOL)enableSwitchSystemGroup;
- (id)navTitleString;
- (void)switchToGroupWithIndex:(long long)a0;
- (id)currentSystemGroupName;
- (void)addBtnExecute:(id)a0 currentState:(BOOL)a1;
- (void)fetchSystemGroupListData;
- (long long)numberOfDataInSection:(long long)a0;
- (void)searchUserByText:(id)a0;
- (id)userForRow:(long long)a0 inSection:(long long)a1;
- (BOOL)enableQuickSearchVerticalBar;
- (void)deSelectUser:(id)a0;
- (void)selectUser:(id)a0;
- (void)__setupSearchManager;
- (void)afterFetchGroupUidsData:(id)a0;
- (id)initWithGroupID:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)prepareData;

@end
