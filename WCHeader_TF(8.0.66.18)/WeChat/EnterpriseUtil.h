@interface EnterpriseUtil : MMObject

+ (id)getEnterpriseChatCachePath;
+ (id)getPathOfEnterpriseMessageDB:(id)a0;
+ (id)GetPathOfMesAudio:(id)a0 LocalID:(unsigned int)a1 Brand:(id)a2 DocPath:(id)a3;
+ (id)GetPathOfMesAudioTrans:(id)a0 LocalID:(unsigned int)a1 Brand:(id)a2 DocPath:(id)a3;
+ (id)convertSvrFullBizChat2EnterpirseContact:(id)a0;
+ (id)convertCreateChatPageResToContact:(id)a0 brand:(id)a1;
+ (id)convertCreateChatPageResToContactList:(id)a0 brand:(id)a1;
+ (id)convertAddMemberPageResToContact:(id)a0 extContact:(id)a1 brand:(id)a2;
+ (id)convertAddMemberPageResToContactList:(id)a0 brand:(id)a1;
+ (id)convertMsgWrap2EnterpriseDBItem:(id)a0 brandUserName:(id)a1;
+ (id)convertEnterpriseMsgDBItem2MsgWrap:(id)a0;
+ (id)batchConvertEnterpriseMsgDBItem2MsgWrap:(id)a0;
+ (BOOL)isMsgWrapAtMe:(id)a0;
+ (BOOL)isMsgWrapFromMe:(id)a0;
+ (BOOL)isMsgWrapAtAll:(id)a0;
+ (BOOL)isChatRoomMsg:(id)a0;
+ (id)getEnterpriseChatBrandUserName:(id)a0;
+ (id)getEnterpriseSenderOfMsgWrap:(id)a0;
+ (id)fillMsgSource:(id)a0 chatId:(id)a1 brand:(id)a2;
+ (void)asyncGenerateInviteColleagesMsg:(id)a0 resultMsgBlock:(id /* block */)a1;

@end
