@interface EmoticonReportData : MMObject

+ (void)ReportEmoticonBoardShowClick;
+ (void)ReportEmoticonDownloadFromPreview;
+ (void)ReportEmoticonDownloadFromSns;
+ (void)ReportEmoticonDownloadFromNodeView;
+ (void)ReportEmoticonDownloadFromQrcode;
+ (void)ReportEmoticonAction:(unsigned long long)a0 scene:(unsigned long long)a1 messageWrap:(id)a2;
+ (void)ReportEmoticonAction:(unsigned long long)a0 md5:(id)a1 scene:(unsigned long long)a2 designerId:(id)a3 productId:(id)a4 userName:(id)a5 newSceneStr:(id)a6 searchId:(id)a7 docId:(id)a8 activityId:(id)a9 sessionID:(id)a10 feedId:(id)a11 finderUserName:(id)a12;
+ (void)ReportEmoticonAction:(unsigned long long)a0 emoticonWrap:(id)a1 newScene:(int)a2 sessionID:(id)a3 fromUsr:(id)a4 feedId:(id)a5 finderUserName:(id)a6;
+ (void)ReportEmoticonAction:(unsigned long long)a0 newScene:(int)a1 searchEmotWrap:(id)a2;
+ (void)ReportEmoticonAction:(unsigned long long)a0 newScene:(int)a1 emojiInfoObj:(id)a2;
+ (void)ReportSelectGifFailedWithDatalength:(unsigned int)a0 scene:(unsigned long long)a1;
+ (void)ReportSendGifWithDatalength:(unsigned int)a0 md5:(id)a1 scene:(unsigned long long)a2;
+ (void)ReportFastManagementAction:(int)a0 scene:(int)a1 pid:(id)a2 md5:(id)a3 index:(int)a4;
+ (void)ReportRedotAction:(int)a0 isRed:(int)a1 enterPid:(id)a2 index:(int)a3 pid:(id)a4 newPage:(int)a5;
+ (void)ReportRedotExposeActionWithEnterPid:(id)a0 index:(int)a1 newPage:(int)a2;
+ (void)ReportScene:(id)a0 error:(id)a1;
+ (void)ReportUnzipEmojiResouceFailed:(unsigned int)a0 prevVersion:(unsigned int)a1 toVersion:(unsigned int)a2;
+ (void)ReportUnzipEmojiResouceSuccess:(unsigned int)a0 prevVersion:(unsigned int)a1 toVersion:(unsigned int)a2;
+ (void)ReporLoadEmojiResouceFailed:(unsigned int)a0;
+ (void)ReporLoadEmojiResouceSuccess:(unsigned int)a0 count:(unsigned int)a1;
+ (void)ReportEmojiCoverageWithScene:(unsigned long long)a0 success:(BOOL)a1 reason:(unsigned long long)a2 count:(unsigned int)a3 prevVersion:(unsigned int)a4 curVersion:(unsigned int)a5 subType:(unsigned int)a6;
+ (void)ReportEmoticonBoardExpandAction:(unsigned long long)a0 tabIndex:(unsigned long long)a1;
+ (void)ReportEmoticonManageDelResult:(unsigned long long)a0 emojiCnt:(unsigned long long)a1;
+ (void)ReportEmoticonManageOperation:(unsigned long long)a0 result:(unsigned long long)a1 emojiCnt:(unsigned long long)a2 location:(unsigned long long)a3 ifTop:(BOOL)a4;
+ (void)ReportEmoticonCreateResult:(unsigned long long)a0 fileSource:(unsigned long long)a1 fileType:(unsigned long long)a2 sessionID:(id)a3;
+ (void)ReportEmoticonCreateResult:(unsigned long long)a0 fileSource:(unsigned long long)a1 fileType:(unsigned long long)a2 sessionID:(id)a3 scene:(unsigned long long)a4;
+ (void)ReportEmoticonCreateResult:(unsigned long long)a0 fileSource:(unsigned long long)a1 fileType:(unsigned long long)a2 sessionID:(id)a3 scene:(unsigned long long)a4 extraInfo:(id)a5;
+ (void)ReportEmoticonPostCreate:(unsigned long long)a0 sessionId:(id)a1 isShowInFinder:(BOOL)a2 name:(id)a3 didEnterCreateFinderAccount:(BOOL)a4;

@end
