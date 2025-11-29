@interface FlowIMX.FlowIMBotServiceImpl : NSObject <FlowIMX.FlowIMBotService> {
    void /* unknown type, empty encoding */ delegateArray;
}

- (void)requestBotInfoWithBotID:(id)a0 options:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)createBotWithOptions:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)updateBotInfoWithReq:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)updateBotCommentCountWithBotId:(id)a0 commentCount:(long long)a1;
- (id)getBotInfoWithBotID:(id)a0 caller:(id)a1 file:(id)a2;
- (void)asyncGetBotInfoWithBotID:(id)a0 callback:(id /* block */)a1;
- (id)defaultBotInfoWithBotID:(id)a0;
- (void)getBotInfoWithConversationID:(id)a0 conversation:(id)a1 callback:(id /* block */)a2;
- (void)batchRequestBotInfoWithBotIds:(id)a0 options:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)updateLLMInfoWithBotID:(id)a0 llmModel:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)updateLanguageWithBotID:(id)a0 languageCode:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)updateTTSInfoWithBotID:(id)a0 ttsModel:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)deleteWithBotID:(id)a0 success:(id /* block */)a1 fail:(id /* block */)a2;
- (void)updateVisibilityWithBotID:(id)a0 visibility:(long long)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)updateMessagePushWithBotID:(id)a0 messagePush:(BOOL)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)updateBgImgWithBotID:(id)a0 bgImgUri:(id)a1 bgImgUrl:(id)a2 avatarUri:(id)a3 avatarUrl:(id)a4 bgImgInfo:(id)a5 success:(id /* block */)a6 fail:(id /* block */)a7;
- (void)updateMemoryWithBotID:(id)a0 memoryInfo:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (void)updateCallerNameWithBotId:(id)a0 name:(id)a1 trackCurrentPage:(id)a2 callback:(id /* block */)a3;
- (void)summonBotIn:(id)a0 botId:(id)a1 success:(id /* block */)a2 fail:(id /* block */)a3;
- (id)likeBotWithBotId:(id)a0 like:(BOOL)a1 completion:(id /* block */)a2;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
