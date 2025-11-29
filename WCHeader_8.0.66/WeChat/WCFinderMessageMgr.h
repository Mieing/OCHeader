@interface WCFinderMessageMgr : NSObject

+ (BOOL)isFinderMsg:(id)a0;
+ (void)clickFinderFeed:(id)a0 shareEnterUsername:(id)a1 reportModel:(id)a2 fromCell:(id)a3 cardType:(int)a4 adParamInofStr:(id)a5 encryptedTid:(id)a6 notGetReleatedList:(BOOL)a7 entranceGMsgID:(id)a8 fromVC:(id)a9;
+ (void)pushFinderShareDetailViewControllerWithItem:(id)a0 notGetReleatedList:(BOOL)a1 entranceGMsgID:(id)a2 reportModel:(id)a3 currentNavController:(id)a4 enterScene:(unsigned long long)a5 customParam:(id)a6 fromVC:(id)a7;
+ (void)clickFinderFeed:(id)a0 shareEnterUsername:(id)a1 reportModel:(id)a2 fromCell:(id)a3 entranceGMsgID:(id)a4 fromVC:(id)a5;
+ (void)clickFinderNameCard:(id)a0 isChatRoom:(BOOL)a1 fromUserName:(id)a2 talkerName:(id)a3 profileEnterType:(int)a4 finderEntryScene:(int)a5;
+ (void)clickFinderNameCard:(id)a0 messageWrap:(id)a1 isChatRoom:(BOOL)a2 fromUserName:(id)a3 talkerName:(id)a4 profileEnterType:(int)a5 finderEntryScene:(int)a6;
+ (void)clickFinderNameCard:(id)a0 messageWrap:(id)a1 isChatRoom:(BOOL)a2 fromUserName:(id)a3 talkerName:(id)a4 profileEnterType:(int)a5 finderEntryScene:(int)a6 fromVC:(id)a7;
+ (void)pushMembershipViewControllerWithNameCard:(id)a0 followInfo:(id)a1;
+ (void)clickFinderTopic:(id)a0 shareScene:(unsigned long long)a1;
+ (void)clickFinderCollection:(id)a0 shareScene:(unsigned long long)a1;
+ (void)clickFinderLongVideo:(id)a0 shareEnterUsername:(id)a1 reportModel:(id)a2 fromCell:(id)a3;
+ (void)clickFinderLongVideo:(id)a0 shareEnterUsername:(id)a1 reportModel:(id)a2 fromCell:(id)a3 notGetReleatedList:(BOOL)a4;
+ (void)clickFinderLongVideo:(id)a0 fromUserName:(id)a1 toUserName:(id)a2;
+ (void)clickFinderLive:(id)a0 entryScene:(int)a1 fromViewController:(id)a2 fromChatUsername:(id)a3 customParams:(id)a4;
+ (void)clickFinderLive:(id)a0 entryScene:(int)a1 fromViewController:(id)a2 customParams:(id)a3;
+ (void)clickFinderLive:(id)a0 entryScene:(int)a1 fromViewController:(id)a2 fromChatUsername:(id)a3;
+ (void)clickFinderLive:(id)a0 entryScene:(int)a1 fromViewController:(id)a2;
+ (void)clickFinderLive:(id)a0 entryScene:(int)a1;
+ (void)clickFinderPOIRelatedItem:(id)a0 enterScene:(int)a1 userName:(id)a2 reportID:(id)a3;
+ (void)clickFinderOrder:(id)a0 fromVC:(id)a1;
+ (void)clickFinderShopWindow:(id)a0 fromVC:(id)a1;

@end
