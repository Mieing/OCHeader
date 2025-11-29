@interface WXGBackupMessageItemHandler : NSObject

+ (id)bakChatMsgItemForMessageWrap:(id)a0;
+ (id)messageWrapFromBakChatMsgItem:(id)a0;
+ (id)getMediaHeadByMessageWrap:(id)a0;
+ (void)convertStatusVideo:(id)a0 andBakchatMsgItem:(id)a1;
+ (id)getMediaIDByMessageWrap:(id)a0;
+ (id)pathForMessageWrap:(id)a0 forBakChatMediaType:(unsigned int)a1 withMediaID:(id)a2;
+ (id)onClearVoiceHeadData:(id)a0;
+ (void)convertStatusVideo:(id)a0 roamMsgItem:(id)a1;

@end
