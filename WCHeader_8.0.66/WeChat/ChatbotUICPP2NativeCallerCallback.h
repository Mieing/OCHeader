@interface ChatbotUICPP2NativeCallerCallback : NSObject {
    struct ChatbotUICPP2NativeCallerDispatcherBridgeObjcImpl { void /* function */ **x0; struct ChatbotUICPP2NativeCallerDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct ChatbotUICPP2NativeCallerDispatcherBridgeObjcImpl { void /* function */ **x0; struct ChatbotUICPP2NativeCallerDispatcherCallback *x1; id x2; } *)a0;
- (void)onTalkSuccComplete:(unsigned long long)a0;
- (void)onCallEndComplete:(unsigned long long)a0;
- (void)onOnRecvRUDPComplete:(unsigned long long)a0;
- (void)onOnTTSBeginComplete:(unsigned long long)a0;
- (void)onOnTTSEndComplete:(unsigned long long)a0;
- (void)onOnAIMicSpeakStatusComplete:(unsigned long long)a0;
- (void)onOnRecvMsgComplete:(unsigned long long)a0;
- (void)onOnRecvStreamTextComplete:(unsigned long long)a0;
- (void)onOnRecvQuestionInfoComplete:(unsigned long long)a0;
- (void)onOnRecvWeAppNotifyClientMsgComplete:(unsigned long long)a0;
- (void)onOnRecvWeAppCdpComplete:(unsigned long long)a0;
- (void)onOnRecvWeAppProccessMsgComplete:(unsigned long long)a0;
- (void)onOnRecvPOIRequestComplete:(unsigned long long)a0;
- (void)onOnRecvCommonFunctionCallDataComplete:(unsigned long long)a0;
- (void)onOnSocialHistoryUpdateComplete:(unsigned long long)a0;
- (void)onOnRecvAiSpeakingInfoComplete:(unsigned long long)a0;
- (void)onOnAIComeInComplete:(unsigned long long)a0;
- (void)onOnRecvPrologueMsgWrapInfoComplete:(unsigned long long)a0;
- (void)onOnRecvRecommendMsgInfoComplete:(unsigned long long)a0;

@end
