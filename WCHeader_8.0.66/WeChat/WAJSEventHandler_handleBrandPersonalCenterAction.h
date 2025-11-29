@interface WAJSEventHandler_handleBrandPersonalCenterAction : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate> {
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ $__lazy_storage_$_forwardLogic;
}

- (void)handleJSEvent:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
