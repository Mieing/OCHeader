@class NSString, AWEIMChatForceInsertNode, AWEIMComponentManager;
@protocol AWEIMForceInsertChatProtocol;

@interface AWEIMChatForceInsertComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMChatForceInsertInterface>

@property (retain, nonatomic) AWEIMChatForceInsertNode *firstDecisionNode;
@property (weak, nonatomic) id<AWEIMForceInsertChatProtocol> currentInsertComponent;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)onCellWillDisplay:(id)a0;
- (void)onCellDidEndDisplay:(id)a0;
- (void)loadForceInsertData;
- (void)retryHandlePriorityDecision:(id)a0;
- (void)manageInsertedChat:(id)a0 operation:(unsigned long long)a1 needReload:(BOOL)a2;
- (BOOL)isForceInsertChatWithSessionId:(id)a0;
- (void)insertFtsInitIfNeed;
- (id)searchChatWithID:(id)a0;
- (void)handlePriorityDecision;
- (id)p_priorityStringWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
