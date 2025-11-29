@class NSOperationQueue, NSMutableDictionary, NSString;

@interface AWEIMElfBotMemoryUpdateComponent : AWEIMComponentBase <AWEUserMessage, IESIMLoginManagerMessage, AWEIMElfBotMemoryUpdateProtocol>

@property (retain, nonatomic) NSMutableDictionary *taskDic;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) BOOL canGenerateMemory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)timestampWithConversationID:(id)a0 currentUserID:(id)a1;
+ (void)executeWithComponent:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (void)setTimestamp:(long long)a0 conversationID:(id)a1 currentUserID:(id)a2;
+ (id)keyWithConversationID:(id)a0 currentUserID:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (BOOL)manualUpdateMemoryTaskExistWithConversationID:(id)a0;
- (void)cancelManualUpdateMemoryTaskIfNeededWithConversationID:(id)a0;
- (void)autoUpdateMemoryIfNeededWithConversation:(id)a0 completion:(id /* block */)a1;
- (void)updateMemoryWithConversation:(id)a0 completion:(id /* block */)a1;
- (void)manualUpdateMemoryWithConversation:(id)a0 messageRange:(id)a1 needGenTopic:(BOOL)a2 needGenArchive:(BOOL)a3 completion:(id /* block */)a4;
- (void)requestAggregationInfoIfNeededWithConversationID:(id)a0 jsbParams:(id)a1 source:(unsigned long long)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)requestSecretKeyWithConvShortID:(id)a0 completion:(id /* block */)a1;
- (void)deleteTopicIDWithContext:(id)a0 completion:(id /* block */)a1;
- (void)requestSignArchiveWithConversationID:(id)a0 content:(id)a1 completion:(id /* block */)a2;
- (void)autoUpdateMemoryIfNeeded;
- (void)p_updateMemoryIfNeededWithConversation:(id)a0 force:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_updateMemoryWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
