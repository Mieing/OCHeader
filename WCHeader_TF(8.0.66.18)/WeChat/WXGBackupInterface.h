@interface WXGBackupInterface : NSObject

+ (BOOL)isBakChatName:(id)a0;
+ (void)changeForBackup:(id)a0;
+ (BOOL)isMsgWrapSupportBackup:(id)a0;
+ (BOOL)isMsgWrapSupportRoam:(id)a0;
+ (BOOL)extMsgSupportBackup:(id)a0;
+ (BOOL)extAppMsgSupportBackup:(id)a0;
+ (BOOL)isSpecialMsgMayNotHaveSvrid:(id)a0;
+ (BOOL)isSpecialMsgInRoomContent:(id)a0;
+ (void)makeupMessageWrap:(id)a0;
+ (BOOL)isTextMessage:(id)a0;
+ (id)getIDFromPayMsg:(id)a0;
+ (id)getIDFromGiftMsg:(id)a0;
+ (id)getPayMsgSendIDFromURL:(id)a0;
+ (id)getIDFromVoipIniteMsg:(id)a0;
+ (id)getIDFromMsg:(id)a0;

@end
