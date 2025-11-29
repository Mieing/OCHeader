@class ForwardMessageLogicController, WAContact, NSString;

@interface WAJSEventHandler_shareSpecificWxapp : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate>

@property (retain, nonatomic) WAContact *contact;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (id)getShareStatReport:(id)a0;
- (void).cxx_destruct;

@end
