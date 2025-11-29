@class NSString, ChatbotFileUtilCPP2NativeCallerCallback;

@interface ChatBotFileUtilAffImpl : NSObject <ChatbotFileUtilCPP2NativeCallerBase>

@property (retain, nonatomic) ChatbotFileUtilCPP2NativeCallerCallback *m_callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)getUserCachePathAsync:(unsigned long long)a0;
- (void).cxx_destruct;

@end
