@class NSString, AWEIMRecommendGroupRequestService, AWEIMMessageTabRecommendGroupCache;

@interface AWEIMRecommendGroupModuleService : HTSService <HTSService, AWEIMRecommendGroupModuleService>

@property (retain, nonatomic) AWEIMRecommendGroupRequestService *requestService;
@property (retain) AWEIMMessageTabRecommendGroupCache *cache;
@property (nonatomic) double latestShowTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)beginAsyncLoadRecommendSchoolGroups;
- (id)performRecommendChatClickWithIdentifier:(id)a0;
- (void)removeRecommendGroupChatWithIdentifier:(id)a0 onlyLocal:(BOOL)a1 needReloadData:(BOOL)a2;
- (void)markRecommendGroupChatShowWithIdentifier:(id)a0;
- (id)updateRecommendGroupWithIdentifier:(id)a0 status:(long long)a1;
- (BOOL)recommendGroupAbilityIsEnable;
- (id)__fetchRecommendItemsFromRemoteIfNeededWithCache:(id)a0;
- (id)recommendChatWithIdentifier:(id)a0;
- (id)updateRecommendChatStatus:(long long)a0 chat:(id)a1;
- (void)removeRecommendGroupChatModelDataSource:(id)a0 needReloadData:(BOOL)a1;
- (void)removeRecommendGroupChatModel:(id)a0 needReloadData:(BOOL)a1;
- (id)__routerToJoinGroupViewController:(id)a0;
- (void)__handleShowCreateGroupPanelWithIdentifier:(id)a0 chat:(id)a1;
- (void)updateRecommendGroupChatModel:(id)a0 callDelegate:(BOOL)a1;
- (id)latestShowTimestampCacheKey;
- (void).cxx_destruct;
- (id)init;

@end
