@class NSString, VoiceTransHelper;

@interface WebviewJSEventHandler_translateVoice : WebviewJSEventHandlerBase <VoiceTransDelegate> {
    VoiceTransHelper *_transHelper;
    NSString *_transResult;
    BOOL _isShowProgressTips;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onVoiceTransVoiceID:(id)a0 transResult:(id)a1;
- (void)onVoiceTransEnd:(id)a0 FromCache:(BOOL)a1;
- (void)onVoiceTransFail:(id)a0 baseResponse:(id)a1;
- (void).cxx_destruct;

@end
