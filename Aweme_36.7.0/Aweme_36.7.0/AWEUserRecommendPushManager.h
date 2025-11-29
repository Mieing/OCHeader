@class NSString, AWEUserRecommendBigCardDataSource;

@interface AWEUserRecommendPushManager : NSObject <AWEUserMessage, AWEUserRecommendPushManagerProtocol>

@property (retain, nonatomic) NSString *insertUID;
@property (retain, nonatomic) NSString *targetUID;
@property (nonatomic) BOOL hasUpdatedSubTab;
@property (nonatomic) BOOL needUpdatedSubTab;
@property (retain, nonatomic) AWEUserRecommendBigCardDataSource *friendFromPushDataSource;
@property (nonatomic) BOOL isFetchingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)hasUserRecommendPushInsertUIDInFamiliarFeed;
- (void)fetchUserRecommendPushIfNeeded:(id /* block */)a0;
- (BOOL)canFetchUserRecommendPushCard;
- (void)clearUserRecommendPushInsertUIDInFamiliarFeed;
- (id)insertUserRecommendPushIfNeededWithList:(id)a0;
- (unsigned long long)landingPageForRecommendPush;
- (void)setUserRecommendPushInsertUID:(id)a0 targetUID:(id)a1;
- (id)userRecommendPushInsertUIDInFamiliarFeed;
- (id)userRecommendPushTargetUIDInFamiliarFeed;
- (void).cxx_destruct;
- (void)dealloc;

@end
