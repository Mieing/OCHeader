@interface ChatRoomUtils : NSObject

+ (void)openAddContactWithMemberList:(id)a0 inViewController:(id)a1 contactsDataScene:(unsigned long long)a2 delegate:(id)a3;
+ (void)openContactProfile:(id)a0 ofChatRoomContact:(id)a1 inViewController:(id)a2 delegate:(id)a3;
+ (void)openContactProfile:(id)a0 ofChatRoomContact:(id)a1 inViewController:(id)a2 delegate:(id)a3 searchScene:(unsigned long long)a4;
+ (void)onNeedUpgradeChatRoom:(id)a0 delegate:(id)a1 tag:(int)a2;
+ (void)onAddChatroomMemberTooMuch:(id)a0 delegate:(id)a1;
+ (BOOL)checkRowHadOpenIMContactWithRow:(unsigned long long)a0 numCellCol:(unsigned long long)a1 numCellCnt:(unsigned long long)a2 arrMemberList:(id)a3;
+ (double)getMemListCellHeight:(BOOL)a0;
+ (id)genRichTextJoinChatRoomWord:(id)a0;
+ (id)getJoinChatRoomInviterUserName:(id)a0;

@end
