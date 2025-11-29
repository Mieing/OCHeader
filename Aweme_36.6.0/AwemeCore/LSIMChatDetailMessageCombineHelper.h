@interface LSIMChatDetailMessageCombineHelper : NSObject

+ (BOOL)p_canCombineCellVM:(id)a0 preCellVM:(id)a1 inConversation:(id)a2;
+ (BOOL)p_isSameSenderInCellVM:(id)a0 preCellVM:(id)a1 inConversation:(id)a2;
+ (void)makeCellVMCombineWithSource:(id)a0 inConversation:(id)a1 isFetchedHistory:(BOOL)a2;

@end
