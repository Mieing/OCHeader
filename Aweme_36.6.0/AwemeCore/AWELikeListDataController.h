@class NSArray, NSString, AWEAwemeModel;

@interface AWELikeListDataController : AWEListDataController <AWELikeListDataControllerProtocol>

@property (retain, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) NSArray *insertUsers;
@property (nonatomic) long long itemType;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long filterCount;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long likeListOptimizeEmptyResponseCount;
@property (nonatomic) BOOL isAuthor;
@property (nonatomic) BOOL requestData;
@property (nonatomic) BOOL fetchedData;
@property (nonatomic) BOOL isFriends;
@property (nonatomic) long long loadMorePageSize;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;
@property (nonatomic) BOOL hasBottomPrivacyText;
@property (nonatomic) long long privacyType;
@property (copy, nonatomic) NSString *firstPrivacyText;
@property (copy, nonatomic) NSString *secondPrivacyText;
@property (nonatomic) long long bottomPrivacyTextHasSecondLine;
@property (copy, nonatomic) NSString *bottomPrivacyText;
@property (copy, nonatomic) NSArray *insertLikerIDs;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long insertDiggCanceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)textConfig;
- (id)paramStringFromStringArray:(id)a0;
- (id)getUsersFromUserList:(id)a0;
- (BOOL)isEmptyData;
- (id)initWithAwemeModel:(id)a0 insertUsers:(id)a1 itemType:(long long)a2;
- (id)getParams:(BOOL)a0;
- (void)p_updateBottomPrivacyInfo:(id)a0;
- (void)trackTotalCountIsNotEqualUserListCountIfNeeded;
- (BOOL)enableOptimizeEmptyResponse;
- (long long)likeListOptimizeEmptyResponseMaxCount;
- (void)automaticallyInitiateRequestsWithCompletion:(id /* block */)a0;
- (BOOL)shouldFilterUserList;
- (void)updatePrivacyType:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
