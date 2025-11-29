@class NSDictionary;

@interface WAJSEventHandler_genRedPackageCover : WAJSEventHandler_BaseEvent {
    NSDictionary *m_extraData;
}

- (void)handleJSEvent:(id)a0;
- (void)handleActionByChatBotWithParam:(id)a0;
- (void)showChatBotQuickReply:(id)a0;
- (void)chooseAlbumLastPohto;
- (void)finishJSEventWithGeneratedCover:(id)a0 msgId:(long long)a1;
- (void)finishWithNoOperation;
- (void)dealloc;
- (void).cxx_destruct;

@end
