@class AWEIMChatModel, BFTask, NSString;

@interface AWEIMForceInsertChat_Group : AWEIMComponentBase <AWEIMForceInsertChatAction, AWEIMForceInsertChatProtocol>

@property (retain, nonatomic) AWEIMChatModel *chatModel;
@property (retain, nonatomic) BFTask *clickHandlerTask;
@property (nonatomic) BOOL markEnterBackgroundEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)app_didEnterBackground;
- (void)componentDidMounted:(id)a0;
- (void)onCellWillDisplay:(id)a0;
- (void)didClickForceInsertChatCell:(id)a0 chatCell:(id)a1 chatListVC:(id)a2;
- (void)didRemoveForceInsertChat:(id)a0;
- (void)didShowForceInsertChat:(id)a0;
- (id)forceInsertDecisionNode;
- (id)trackParamsWithActionType:(id)a0;
- (void)markRecommendGroupChatShow;
- (void).cxx_destruct;
- (unsigned long long)priority;
- (void)dealloc;

@end
