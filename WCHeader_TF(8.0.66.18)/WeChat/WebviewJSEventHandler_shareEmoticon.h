@class ForwardMessageLogicController, NSString;

@interface WebviewJSEventHandler_shareEmoticon : WebviewJSEventHandlerBase <ForwardMessageLogicDelegate, MMImageLoaderObserver> {
    NSString *m_activityId;
}

@property (retain, nonatomic) ForwardMessageLogicController *forwardLogicController;
@property (retain, nonatomic) NSString *currentUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)shareEmoticonWithData:(id)a0;
- (BOOL)showForwardMsgView:(id)a0 Image:(id)a1 ErrorMsg:(id *)a2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
