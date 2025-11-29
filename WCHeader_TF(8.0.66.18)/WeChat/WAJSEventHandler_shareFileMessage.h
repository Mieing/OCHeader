@class NSString, ForwardMessageLogicController;

@interface WAJSEventHandler_shareFileMessage : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate> {
    ForwardMessageLogicController *m_forwardMsgLogic;
}

@property (nonatomic) BOOL isToSpecificContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)shareFile:(id)a0 toUsername:(id)a1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void).cxx_destruct;

@end
