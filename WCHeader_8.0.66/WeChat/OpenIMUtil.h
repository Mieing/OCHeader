@interface OpenIMUtil : NSObject

+ (BOOL)checkIsOpenImChatWithViewController:(id)a0;
+ (void)showOpenIMStorageMakeSureViewController:(id)a0 privacyAgreementUrl:(id)a1 fromVC:(id)a2;
+ (void)reportOpenIMChatRoomWithReportScene:(int)a0 chatRoomUserName:(id)a1;
+ (void)reportOpenIMSearchFriendWithReportSessionID:(id)a0 reportActionCode:(int)a1 reportActionResult:(int)a2 reportClickAddContact:(int)a3;
+ (void)reportOpenIMSucceedContactdWithReportSessionID:(id)a0 reportUserName:(id)a1 reportSucceedStatus:(int)a2 reportUserStatus:(int)a3 reportShowSucceedMethod:(int)a4 reportClickSucceedAction:(int)a5 reportWatchMessageRecord:(int)a6 reportSendMessageStatus:(int)a7;
+ (void)reportOpenIMChatRoomClickGroupMemberHeaderImage:(id)a0;
+ (void)reportOpenIMNewSucceedContactdWithReportSessionID:(id)a0 reportActionCode:(int)a1 resignationWorkUsername:(id)a2 takeOverWorkUsername:(id)a3 workEnterpriseDescId:(id)a4 workEnterpriseName:(id)a5;

@end
