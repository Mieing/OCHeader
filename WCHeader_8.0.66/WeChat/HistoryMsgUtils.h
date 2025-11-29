@interface HistoryMsgUtils : NSObject

+ (BOOL)isJoinGroupMsgNeedDownloadMsg:(id)a0;
+ (BOOL)isOpenNewHistoryMsgShow;
+ (BOOL)isOpenNewHistoryMsgUpload;
+ (BOOL)isCloseOldHistoryMsgUpload;
+ (BOOL)checkHistoryUploadInfo:(id)a0;
+ (id)genTextMsgWithText:(id)a0 msgWrap:(id)a1;
+ (id)covertToAddMsgWithMsgWrap:(id)a0;
+ (id)getThumbnailWithMsgWrap:(id)a0;
+ (BOOL)isNeedUploadDataMsg:(id)a0;
+ (BOOL)canSendOriMsg:(id)a0;
+ (BOOL)isCanSendOriginAppMsg:(id)a0;
+ (BOOL)isMsgUseCdnUpload:(id)a0;
+ (void)reportWhenShowHistoryMsg:(id)a0;
+ (void)reportWhenReceiveInviteMsg:(id)a0;

@end
