@class ChatBotTraceData;

@interface ChatBotImgTraceInfo : SimpleImgInfo

@property (retain, nonatomic) ChatBotTraceData *traceData;

- (id)m_strMsgLocalID;
- (BOOL)isImgMsg;
- (unsigned int)m_uiCreateTime;
- (id)getImgPath;
- (void).cxx_destruct;

@end
