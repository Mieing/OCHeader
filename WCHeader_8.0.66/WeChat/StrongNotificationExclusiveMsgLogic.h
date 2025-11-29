@class NSString, StrongNotificationViewController;
@protocol StrongNotificationExclusiveMsgLogicDelegate;

@interface StrongNotificationExclusiveMsgLogic : MMObject <StrongNotificationViewControllerDelegate, IMsgExt> {
    StrongNotificationViewController *m_strongNotificationViewController;
}

@property (weak, nonatomic) id<StrongNotificationExclusiveMsgLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)checkMsgQueue;
- (BOOL)isWindowShowing;
- (void)onFromBackgroundToForeground;
- (void)p_internalCheckMsgQueue;
- (void)processMsg;
- (id)p_getExclusiveMsgQueue;
- (id)p_getStrongNotificationViewController;
- (void)clearAllStrongNotificationItemAndMessageHiddenWindow;
- (void)closeStrongNotificationWithItemWithForcePushId:(id)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void).cxx_destruct;

@end
