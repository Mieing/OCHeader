@class NSString, WCCoinBusinessReporter, WCSessionVCStack, NSMutableDictionary, NSSet, WCSpecialEnteranceRepoter, NSMutableArray, WCForeBackFlowMgr;

@interface WCSessionFlowMonitorService : MMUserService <MMServiceProtocol, SessionFlowSwizzleExt, ClickStatSwizzleExt, SessionClickSwizzleExt> {
    WCSessionVCStack *m_stack;
    NSMutableDictionary *m_pushAndPopDic;
    NSMutableDictionary *m_presentAndDismissDic;
    NSMutableDictionary *m_appearAndDisappearDic;
    NSSet *m_ignoreAppearAndDisappearSet;
    NSMutableArray *m_accountSwitchProtocols;
    WCForeBackFlowMgr *m_foreBackFlowMgr;
    WCCoinBusinessReporter *m_coinBusinessReporter;
    WCSpecialEnteranceRepoter *m_specialEnteranceRepoter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onViewDidBePoped:(id)a0 withVC:(id)a1;
- (void)onViewDidBePushed:(id)a0 withVC:(id)a1;
- (void)onViewDidAppear:(id)a0 withVC:(id)a1;
- (void)onViewDidDisappear:(id)a0 withVC:(id)a1;
- (void)onViewDidBePresented:(id)a0 withVC:(id)a1;
- (void)onViewDidBeDismissed:(id)a0 withVC:(id)a1;
- (void)onSendEvent:(id)a0;
- (void)onSendAction:(SEL)a0 to:(id)a1 from:(id)a2 forEvent:(id)a3;
- (void)onGesture:(id)a0 withTarget:(id)a1 withAction:(id)a2;
- (BOOL)isInvisibleOut:(long long)a0;
- (unsigned long long)getHashCode:(id)a0;
- (void).cxx_destruct;

@end
