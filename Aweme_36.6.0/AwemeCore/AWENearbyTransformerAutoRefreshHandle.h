@class AWENearbyTransformerAutoRefreshModel, NSMutableDictionary, AWENearbyLRUCache;
@protocol AWENearbyTransformerAutoRefreshSceneControllerProtocol;

@interface AWENearbyTransformerAutoRefreshHandle : NSObject

@property (weak, nonatomic) id<AWENearbyTransformerAutoRefreshSceneControllerProtocol> sceneController;
@property (retain, nonatomic) NSMutableDictionary *cardAutoRefreshModelsMap;
@property (retain, nonatomic) AWENearbyTransformerAutoRefreshModel *globalAutoRefreshModel;
@property (retain, nonatomic) AWENearbyLRUCache *cardUpdateModelCache;
@property (nonatomic) double lastAutoRefreshTimeInterval;
@property (nonatomic) long long sceneType;
@property (nonatomic) long long timeFrequency;

- (id)__transformRefreshModelsWithDictionary:(id)a0;
- (void)handleAutoRefreshMessage:(id)a0;
- (void)__trackClientDoRefreshTransformerMsgWitAutoRefreshModels:(id)a0 code:(long long)a1 msg:(id)a2;
- (void)handleCardAutoRefreshMessage:(id)a0;
- (void)cleanAutoRefreshModel;
- (void)__autoRefreshWithRefreshModel:(id)a0;
- (BOOL)__updateCardWithRefreshModel:(id)a0;
- (id)__keyForCardUpdateModelCache:(long long)a0 msgID:(id)a1;
- (void)__trackClientUpdateCardMsgResultValid:(BOOL)a0 params:(id)a1;
- (id)__stringWithInteger:(long long)a0;
- (void)__cleanGlobalAutoRefreshModelWithTrackFlag:(BOOL)a0;
- (void)__cleanCardAutoRefreshModelsWithTrackFlag:(BOOL)a0;
- (BOOL)__isExpiredWithModel:(id)a0;
- (void)__trackClientRefreshCiamondMsgResultWithSuccess:(BOOL)a0 params:(id)a1;
- (id)initWithSceneType:(long long)a0 sceneController:(id)a1;
- (void)triggerAutoRefresh;
- (BOOL)triggerUpdateCardData;
- (void).cxx_destruct;

@end
