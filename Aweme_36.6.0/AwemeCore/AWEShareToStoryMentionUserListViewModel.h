@class NSArray, NSDictionary, NSString, NSObject;
@protocol AFDMentionUserPickerContactDatasourceProtocol;

@interface AWEShareToStoryMentionUserListViewModel : NSObject

@property (retain, nonatomic) NSObject<AFDMentionUserPickerContactDatasourceProtocol> *dataSource;
@property (copy, nonatomic) NSArray *localUserArray;
@property (copy, nonatomic) NSArray *searchList;
@property (copy, nonatomic) id /* block */ searchUserCompletion;
@property (copy, nonatomic) id /* block */ sugSearchCompletion;
@property (copy, nonatomic) NSDictionary *logPassBack;
@property (copy, nonatomic) NSString *keyword;

- (void)p_setup;
- (BOOL)p_isSearchMode;
- (void)searchUsersWithKeyword:(id)a0;
- (void)fetchUsersWithCompletion:(id /* block */)a0;
- (BOOL)hasMoreUsers;
- (void)loadMoreUser;
- (id)p_convertToACCUser:(id)a0;
- (void)p_prepareUserData;
- (void)p_tryAddUser:(id)a0 toArrM:(id)a1 filterSetM:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
