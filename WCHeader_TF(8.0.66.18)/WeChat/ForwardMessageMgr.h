@class NSString, NSMutableDictionary, ForwardMessageLogicController, NSMutableArray, UIViewController;

@interface ForwardMessageMgr : MMUserService <SharePreConfirmSheetViewExt, MMServiceProtocol, ForwardMessageLogicDelegate> {
    ForwardMessageLogicController *m_forwardLogicController;
    UIViewController *m_forwardFromViewController;
}

@property (retain, nonatomic) NSMutableDictionary *forwardMessageLogics;
@property (retain, nonatomic) NSMutableArray *sessionStackPages;
@property (retain, nonatomic) NSMutableArray *shareSheetStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getCurrentViewController;
- (void)forwardMessage:(id)a0 fromViewController:(id)a1 toContact:(id)a2;
- (void)forwardMessage:(id)a0 fromViewController:(id)a1 forwardType:(long long)a2;
- (void)forwardMessage:(id)a0 fromViewController:(id)a1 toContact:(id)a2 forwardType:(long long)a3;
- (void)forwardMessage:(id)a0 fromViewController:(id)a1;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)reportFinderFeedShare:(id)a0 toContact:(id)a1 shareSuccessful:(BOOL)a2;
- (void)onEnterSessionPage:(id)a0;
- (void)onLeaveSessionPage:(id)a0;
- (void)OnSharePreConfirmSheetViewShow:(id)a0;
- (void)OnSharePreConfirmSheetViewClose:(id)a0;
- (id)currentLogicController;
- (void).cxx_destruct;

@end
