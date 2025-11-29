@class NSNumber, NSMutableDictionary, NSString;

@interface AWEKnowledgeStateManager : HTSService <AWEKnowledgeStateManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *stackDic;
@property (copy, nonatomic) NSNumber *firstPlayCostTime;
@property (nonatomic) double firstTriggerTime;
@property (copy, nonatomic) NSNumber *volumeIdentifierNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePlayoutWithJSONString:(id)a0 forScene:(id)a1;
- (BOOL)updatePlayoutConfigIfNeededForPayload:(id)a0;
- (BOOL)updatePlayoutConfigIfNeededForRichContentContainer:(id)a0 forScene:(id)a1 withModel:(id)a2;
- (void)updateLastState:(id)a0 forScene:(id)a1;
- (id)pushToScene:(id)a0 withStackToken:(id)a1 newSceneRichContentContainer:(id)a2;
- (id)createNewStackAndSceneInfoForScene:(id)a0;
- (id)createNewStackAndSceneInfoForScene:(id)a0 richContentContainer:(id)a1 withModel:(id)a2;
- (id)createNewCardInfoForSceneInfo:(id)a0 withModel:(id)a1;
- (id)cardInfoForToken:(id)a0;
- (id)sceneInfoForToken:(id)a0;
- (id)pushToScene:(id)a0 withStackToken:(id)a1;
- (BOOL)popForScene:(id)a0;
- (void)triggerAction:(id)a0 atCard:(id)a1 withParam:(id)a2;
- (void)triggerAction:(id)a0 atCard:(id)a1 withParam:(id)a2 justUpdateState:(BOOL)a3;
- (BOOL)registerObject:(id)a0 forResultHandler:(id)a1 atCard:(id)a2;
- (BOOL)enableWithScene:(id)a0;
- (void)setupNotification;
- (id)sceneConfigForScene:(id)a0;
- (void)updatePlayoutConfig:(id)a0 forScene:(id)a1;
- (id)stateSceneStackForToken:(id)a0;
- (void)registerCardDelegate:(id)a0 atCard:(id)a1;
- (id)createNewStack;
- (id)createSceneForScene:(id)a0 withStackToken:(id)a1;
- (BOOL)isBlackAlbumForModel:(id)a0;
- (id)handlerForType:(id)a0 withObject:(id)a1;
- (void)userTurnUpVolume;
- (void)notifyBackgroundStateChange:(BOOL)a0;
- (void)triggerAction:(id)a0 atCard:(id)a1 withParam:(id)a2 sceneInfo:(id)a3 cardInfo:(id)a4 justUpdateState:(BOOL)a5;
- (void).cxx_destruct;
- (id)init;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
