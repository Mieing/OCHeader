@interface TIMXPBResponseLongConnectionCallback : TIMXLongConnectionCallback

+ (id)callbackWithRootObject:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
+ (id /* block */)filterWithPBCMDType:(int)a0;

- (void)listenNewP2PMessageNotify;
- (void)listenNewMessageNotify;
- (void)listenOnIgnoreBlock:(id /* block */)a0;
- (void)listenWillHandleMessaegBlock:(id /* block */)a0;
- (void)listenWillBeforeFilterBlock:(id /* block */)a0;
- (void)assignCallbackQueue:(id)a0;
- (void)listenHandleMessaegBlock:(id /* block */)a0;
- (void)listenMessageReadCommandNotify;
- (void)listenMarkAsReadNotify;
- (void)listenConversationInfoUpdatedNotify;
- (void)listenStrangerNewMessageNotify;
- (id)initWithRootObject:(id)a0;

@end
