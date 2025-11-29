@class AWEECOMIMLGChatListBiz, NSString;
@protocol AWEECOMIMLGChatListDelegate;

@interface AWEECOMIMLGChatListService : NSObject <AWEECOMIMLGChatListServiceProtocol>

@property (weak, nonatomic) id<AWEECOMIMLGChatListDelegate> delegate;
@property (retain, nonatomic) AWEECOMIMLGChatListBiz *biz;
@property (copy, nonatomic) NSString *uid;

- (id)commonNetParams;
- (void)setupBiz;
- (void)updateInstantRetailShopInfo;
- (void)createBiz;
- (void)markConversationReadWithModel:(id)a0 completion:(id /* block */)a1;
- (void)deleteConversationWithCellModel:(id)a0 completion:(id /* block */)a1;
- (void)markAllConversationReadWithCompletion:(id /* block */)a0;
- (void)updateChatBoxData;
- (void)replaceEmojiForAttributedString:(id)a0 font:(id)a1 displayType:(long long)a2;
- (void)configConversationTopWithIsTop:(BOOL)a0 cellModel:(id)a1 completion:(id /* block */)a2;
- (void)configConversationMuteWithIsMute:(BOOL)a0 cellModel:(id)a1 completion:(id /* block */)a2;
- (id)curUserID;
- (void)p_fetchAllConversationWithCompletion:(id /* block */)a0;
- (id)p_chatDetailCommParamsWithChatDetailUrlString:(id)a0 btmID:(id)a1 conversationID:(id)a2 fromSource:(id)a3;
- (id)p_getSchemeForChatDetailVCWithConversationID:(id)a0 btmID:(id)a1 encodedShopID:(id)a2 pagePath:(id)a3;
- (id)p_getSchemeForAnchorChatDetailVCWithConversationID:(id)a0 btmID:(id)a1 authorID:(id)a2 serviceEntityID:(id)a3;
- (id)p_conversationServiceName:(id)a0;
- (double)imServerTimeStamp;
- (void)fetchAllConversationWithUid:(id)a0 completion:(id /* block */)a1;
- (void)fetchSchemeWithCellModel:(id)a0 btmID:(id)a1 completion:(id /* block */)a2;
- (id)clearUnreadCountParamsWithType:(id)a0 fromSource:(id)a1 cellModel:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
