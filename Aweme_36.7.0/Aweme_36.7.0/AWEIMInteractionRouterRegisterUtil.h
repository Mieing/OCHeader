@interface AWEIMInteractionRouterRegisterUtil : NSObject

+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 withConversationContext:(id)a1;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 conversationID:(id)a1;
+ (id)schemaByAddingCustomParamsInSchema:(id)a0 params:(id)a1 encodeHashtag:(BOOL)a2;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 withShareModelContext:(id)a1;
+ (id)getResponderTopMessageBaseVC;
+ (id)schemaByAddingCustomParamsInSchema:(id)a0 params:(id)a1;
+ (unsigned long long)typeWithSchema:(id)a0;
+ (id)actionBarExeuntParamsWithScheme:(id)a0;
+ (id)routeUrlSchemeTypeMap;
+ (void)sendGiphyMessageWithTransitionInfo:(id)a0 emoticon:(id)a1 theme:(id)a2 aweType:(long long)a3 syncExt:(id)a4;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 conversationPeerId:(id)a1;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 conversationPeerSecId:(id)a1;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 withConversationContext:(id)a1 addTrackParams:(BOOL)a2;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 conversationOwnerId:(id)a1;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 conversationShortID:(id)a1;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 enterFrom:(id)a1;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 extraData:(id)a1;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 parentSchemaRouterParamsData:(id)a1;
+ (void)sendGiphyMessageWithTransitionInfo:(id)a0 content:(id)a1 syncExt:(id)a2;
+ (BOOL)interactiveEmojiRegisterURLValidationWithURLString:(id)a0 paramsDictionary:(id)a1;
+ (void)interactiveEmojiTransferWithTransitionInfo:(id)a0;
+ (BOOL)danmakuEmoticonEditPanelRegisterURLValidationWithURLString:(id)a0 paramsDictionary:(id)a1;
+ (long long)voipTypeWithSchema:(id)a0;
+ (BOOL)checkEnableInvokeVoipInConversation:(id)a0 rtvType:(long long)a1;
+ (id)schemaByReplacingPlaceHoldersInSchema:(id)a0 replacements:(id)a1;
+ (id)setupTraceInfoWithEnterMethodIfNeed:(id)a0 matchUid:(id)a1;
+ (BOOL)aimojiRegisterURLValidationWithURLString:(id)a0 paramsDictionary:(id)a1;
+ (void)aimojiTransferWithTransitionInfo:(id)a0;
+ (unsigned long long)getReplayDisplayTypeWithSceneType:(id)a0;
+ (void)addDefaultDiggWithMessage:(id)a0 toConversation:(id)a1;
+ (void)p_tapGameWithConversation:(id)a0;
+ (void)blockOrUnblockUserWithUserId:(id)a0 conversationID:(id)a1;
+ (id)p_getConversationReportNetworkJsonStringFromConversation:(id)a0;
+ (void)requestActionbarCallbackWithConversationId:(id)a0 key:(id)a1 extraParams:(id)a2 completionBlock:(id /* block */)a3;
+ (void)openSendTransferMoneyPage;
+ (void)p_deleteConversationWithTopMessageVC:(id)a0 conversationID:(id)a1;

@end
