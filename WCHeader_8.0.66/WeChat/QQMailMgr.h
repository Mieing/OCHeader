@class NSMutableDictionary, XMailUploadAttachmentLogic, NSString, XMailSearchMailAddrLogic;

@interface QQMailMgr : MMUserService <IMsgExt, IUpdateProfileMgrExt, MMServiceProtocol, IQQMailExt> {
    BOOL m_bSyncingContact;
    unsigned int m_uiSyncCount;
    int mailUnreadCount;
}

@property (retain, nonatomic) XMailSearchMailAddrLogic *searchMailAddrLogic;
@property (retain, nonatomic) XMailUploadAttachmentLogic *uploadAttachMentLogic;
@property (retain, nonatomic) NSMutableDictionary *m_dicCookie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canBindXmail;
+ (BOOL)isXmailVerified;

- (void)DeleteMailByMailId:(id)a0;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (id)init;
- (void)changeBindXmailAddr:(id)a0;
- (id)GetCookie;
- (id)GetCookieString;
- (void)SyncContact;
- (void)ResetSyncCount;
- (id)GetAllMailContact;
- (id)GetMail:(id)a0;
- (void)SyncMailUnreadCount;
- (void)SetMailUnread:(id)a0;
- (void)uploadAttachmentWithData:(id)a0 fileName:(id)a1;
- (void)uploadAttachmentWithFilePath:(id)a0 fileName:(id)a1;
- (id)composeSend:(id)a0 sendtype:(unsigned int)a1 mailid:(id)a2;
- (void)handleMailUnreadCount:(int)a0;
- (int)getMailUnreadCount;
- (void)asyncSearchMailAddrWithInput:(id)a0;
- (void)clearMailPluginMsgIfNeeded;
- (void)onProfileChange;
- (void).cxx_destruct;

@end
