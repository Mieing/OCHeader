@class NSArray, NSString, AWEAwemeModel;

@interface AWEFavoriteListDataController : AWEListDataController

@property (retain, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSArray *insertUsers;
@property (nonatomic) long long awemeType;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSArray *showedUserList;
@property (nonatomic) BOOL isAuthor;
@property (nonatomic) BOOL requestData;
@property (nonatomic) BOOL fetchedData;
@property (nonatomic) BOOL isFriends;
@property (copy, nonatomic) NSArray *insertFavoriteIDs;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long insertCollectCanceled;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)filterDuplicateUsers:(id)a0;
- (id)getParams;
- (id)paramStringFromStringArray:(id)a0;
- (id)getUsersFromUserList:(id)a0;
- (BOOL)isShowedUser:(id)a0;
- (id)initWithAwemeModel:(id)a0 insertUsers:(id)a1 awemeType:(long long)a2;
- (BOOL)isEmptyData;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
