@interface WAForwardMessageMgr : ForwardMessageMgr

- (void)forwardMessage:(id)a0 fromViewController:(id)a1;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;

@end
