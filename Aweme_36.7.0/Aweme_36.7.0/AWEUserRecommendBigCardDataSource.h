@class AWEUserStatusSynchronizer, NSArray, AWESocialRelationObserver, NSMutableSet, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AWEUserRecommendDataControllerProtocol;

@interface AWEUserRecommendBigCardDataSource : NSObject <AWEUserRecommendBigCardDataSourceMessage>

@property (retain, nonatomic) NSObject<AWEUserRecommendDataControllerProtocol> *dataController;
@property (retain, nonatomic) NSMutableArray *mutableModels;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *avatarQueue;
@property (retain, nonatomic) NSMutableSet *allUserIDs;
@property (retain, nonatomic) AWEUserStatusSynchronizer *userStatusSynchronizer;
@property (retain, nonatomic) NSMutableSet *insertedUserIDs;
@property (retain, nonatomic) AWESocialRelationObserver *mateObserver;
@property (nonatomic) BOOL preloadsAvatar;
@property (nonatomic) BOOL hasFetchedData;
@property (readonly) NSArray *models;
@property (nonatomic) BOOL needImpressedUserIDsToday;
@property (nonatomic) long long feedType;
@property (copy, nonatomic) NSString *businessID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_keyWithUserID:(id)a0;
+ (id)impressedUserIDsToday;
+ (id)p_impressedDate;
+ (id)p_impressedUserIDs;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)removeAllModels;
- (void)insertModel:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeModelAtIndex:(unsigned long long)a0;
- (void)refreshWithNetworkTag:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithDataController:(id)a0;
- (void)updateMateState:(id)a0;
- (void)addModelsFromArray:(id)a0;
- (void)fetchAwemeListForModels:(id)a0 completion:(id /* block */)a1;
- (void)fetchAvatarForModel:(id)a0;
- (void)dataSource:(id)a0 didImpressModel:(id)a1;
- (void)dataSource:(id)a0 didInsertedModel:(id)a1;
- (void)recordInsertModel:(id)a0;
- (void)impressModel:(id)a0;
- (void)fetchAwemeListForModels:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)p_calculateColorForImageURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_isBadColor:(id)a0;
- (id)p_adjustDominantColor:(id)a0;
- (BOOL)shouldReplaceModelWithFeedType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addModel:(id)a0;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
