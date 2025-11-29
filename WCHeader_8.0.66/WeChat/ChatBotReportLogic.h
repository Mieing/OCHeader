@class NSString;

@interface ChatBotReportLogic : NSObject {
    NSString *m_nextSessionId;
}

+ (id)Instance;

- (void)storeNextSessionId:(id)a0;
- (id)getOrGenerateSessionId;
- (void)tryReportChatBotEventWithUserName:(id)a0 eventId:(id)a1 params:(id)a2 logId:(unsigned int)a3;
- (void)tryReportChatBotEventWithUserName:(id)a0 eventId:(id)a1 target:(id)a2 params:(id)a3 logId:(unsigned int)a4;
- (void).cxx_destruct;

@end
