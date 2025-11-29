@interface AWEHotSearchCommentHelper : NSObject

+ (void)trackEvent:(id)a0 withParams:(id)a1 buttonType:(id)a2 tabType:(long long)a3;
+ (void)sendXBridgeEvent:(id)a0 withParams:(id)a1;
+ (id)getCommentGeneralItemModelWithCardModel:(id)a0 hotSpotID:(id)a1 keyWord:(id)a2 params:(id)a3;
+ (id)showCommentReplyTreeWithCardModel:(id)a0 needInput:(BOOL)a1 insertIDs:(id)a2 referString:(id)a3 hotSpotID:(id)a4 keyWord:(id)a5 params:(id)a6 needCustomCommentVC:(BOOL)a7;
+ (id)p_generateCommentVC:(id)a0 commentID:(id)a1 referString:(id)a2;
+ (id)getCommentGeneralItemModelWithCardModel:(id)a0 hotSpotID:(id)a1 keyWord:(id)a2;
+ (id)showCommentReplyTreeWithCardModel:(id)a0 needInput:(BOOL)a1 insertIDs:(id)a2 referString:(id)a3 hotSpotID:(id)a4 keyWord:(id)a5;
+ (id)showCommentReplyTreeWithCardModel:(id)a0 needInput:(BOOL)a1 insertIDs:(id)a2 referString:(id)a3 hotSpotID:(id)a4 keyWord:(id)a5 params:(id)a6;

@end
