@class AWEIMChatModel, NSDictionary, NSString;

@interface AWEIMForceInsertChat_BizAccountDown : AWEIMComponentBase <AWEIMForceInsertChatAction, AWEIMForceInsertChatProtocol>

@property (retain, nonatomic) AWEIMChatModel *chatModel;
@property (nonatomic) BOOL needRemoveWhenLeaveMsgTab;
@property (copy, nonatomic) NSDictionary *tipConfig;
@property (nonatomic) BOOL canMarkShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)markClickWithMaxClickCount:(long long)a0;
+ (void)markExitWithDay:(double)a0;
+ (BOOL)markShowWithMaxShowCount:(long long)a0 exitDay:(double)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didClickForceInsertChatCell:(id)a0 chatCell:(id)a1 chatListVC:(id)a2;
- (void)didRemoveForceInsertChat:(id)a0;
- (void)didShowForceInsertChat:(id)a0;
- (void)onTabBarDidChange:(BOOL)a0;
- (id)forceInsertDecisionNode;
- (void).cxx_destruct;
- (unsigned long long)priority;

@end
