@interface EmoticonStoreReportData : MMObject

+ (id)genEmoticonSDKReportRequestID;
+ (void)ReportEmoticonShareToFriends:(id)a0;
+ (void)ReportEmoticonShareToTimeline:(id)a0;
+ (void)ReportClickEmoticonShareFromMessage:(id)a0;
+ (void)ReportClickEmoticonShareFromTimeline:(id)a0;
+ (void)ReportShowDescToEmoticon:(id)a0 sessionId:(id)a1 wrapList:(id)a2 chatID:(id)a3 recSessionId:(id)a4 remoteWordListMeta:(id)a5;
+ (void)ReportClickEmoticonFromDesc:(id)a0 position:(unsigned int)a1 wrap:(id)a2 totalCount:(unsigned long long)a3 sessionId:(id)a4 clickDiffTime:(unsigned long long)a5;
+ (void)ReportRecommendEmoticonOnScrollEnd:(id)a0 sessionId:(id)a1;
+ (void)ReportRecommendEmoticonSearchMoreExposureWithSessionId:(id)a0;
+ (void)Report10994WithAction:(int)a0 desc:(id)a1 position:(unsigned int)a2 wrapList:(id)a3 totalCount:(unsigned long long)a4 sessionId:(id)a5 chatID:(id)a6 recSessionId:(id)a7 remoteWordListMeta:(id)a8 clickDiffTime:(unsigned long long)a9;
+ (void)ReportClickEmoticonNew;
+ (void)ReportClickCollectionCellForReqType:(unsigned int)a0;
+ (void)ReportClickNowUseButton:(id)a0;
+ (void)ReportSendEmoticonFromNowUseButton:(id)a0;
+ (void)changeEmoticonBoardIndex;
+ (void)changeToolViewStateToNoneEmoticon;
+ (void)markReportSendEmoticonFromNowUseButton;
+ (void)ReportRewardForPid:(id)a0 scene:(unsigned long long)a1 extranceScene:(int)a2 action:(unsigned long long)a3;
+ (void)ReportEmoticonDetailPageExposure:(id)a0 extrance:(int)a1 thirdPartyLinkID:(unsigned long long)a2 thirdPartyLinkStatus:(unsigned long long)a3 thirdPartyLinkReportInfo:(id)a4;
+ (void)ReportEmoticonDesignerPageExposure:(unsigned int)a0 extrance:(int)a1;
+ (void)ReportEmoticonTopicPageExposure:(unsigned int)a0 extrance:(int)a1;
+ (void)ReportEmoticonBrowsePageExposure:(id)a0 activityID:(id)a1 pid:(id)a2 designerUin:(id)a3 newPage:(int)a4 sessionID:(id)a5 lensID:(id)a6 linkId:(id)a7 linkExposured:(BOOL)a8 linkClicked:(BOOL)a9 weappClicked:(BOOL)a10 finderUserName:(id)a11 feedId:(id)a12;
+ (void)ReportEmoticonPageExposure:(int)a0 newPage:(int)a1;
+ (void)ReportEmoticonFinderPageExposure:(id)a0 designerUin:(unsigned int)a1 entranceScene:(int)a2 newPage:(int)a3;
+ (void)ReportEmoticonPageExposure:(unsigned int)a0 desiger:(unsigned int)a1 pid:(id)a2 tid:(unsigned int)a3 extrance:(int)a4 newPage:(int)a5;
+ (void)ReportEmoticonPageExposure:(unsigned int)a0 desiger:(unsigned int)a1 pid:(id)a2 tid:(unsigned int)a3 extrance:(int)a4 newPage:(int)a5 thirdPartyLinkID:(unsigned long long)a6 thirdPartyLinkStatus:(unsigned long long)a7 thirdPartyLinkReportInfo:(id)a8;
+ (void)ReportEmoticonPageExposure:(unsigned int)a0 desiger:(unsigned int)a1 pid:(id)a2 tid:(unsigned int)a3 emotionScene:(int)a4 newPage:(int)a5 md5:(id)a6 activityID:(id)a7 designerUin:(id)a8 sessionID:(id)a9 lensID:(id)a10 linkId:(id)a11 linkExposured:(BOOL)a12 linkClicked:(BOOL)a13 weappClicked:(BOOL)a14 thirdPartyLinkID:(unsigned long long)a15 thirdPartyLinkStatus:(unsigned long long)a16 thirdPartyLinkReportInfo:(id)a17 feedId:(id)a18 finderUserName:(id)a19;
+ (void)ReportEmoticonDownloadScene:(int)a0 Type:(int)a1 LayerId:(id)a2 ProductId:(id)a3 reportInfo:(id)a4;
+ (void)ReportStartSearchInScene:(unsigned long long)a0;
+ (void)ReportDoSearchForKeyword:(id)a0 InScene:(unsigned long long)a1;
+ (void)ReportRecentHotItemWithPid:(id)a0 Action:(unsigned long long)a1;
+ (void)ReportCellSetWithId:(unsigned int)a0 Name:(id)a1 SetType:(unsigned int)a2 Action:(unsigned long long)a3;
+ (void)ReportDesignerEmojiTipsWithScene:(unsigned int)a0 action:(unsigned long long)a1 Md5:(id)a2 searchId:(unsigned long long)a3 designerId:(id)a4 pid:(id)a5 sessionId:(id)a6 emoticonScene:(int)a7 feedId:(id)a8 finderUserName:(id)a9;
+ (void)ReportEmoticonStoreExposureWithScene:(int)a0 SessionId:(unsigned long long)a1 entranceScene:(int)a2 ReportInfo:(id)a3;
+ (void)ReportEmoticonStoreExposureWithScene:(int)a0 SessionId:(unsigned long long)a1 ReportInfo:(id)a2;
+ (id)getSafeMergedReportStrFromArray:(id)a0;
+ (void)ReportEmoticonStoreActionWithScene:(int)a0 Action:(unsigned long long)a1 SessionId:(unsigned long long)a2 Pid:(id)a3 Info:(id)a4 Index:(id)a5 entranceScene:(int)a6;
+ (void)ReportEmoticonStoreActionWithScene:(int)a0 Action:(unsigned long long)a1 SessionId:(unsigned long long)a2 Pid:(id)a3 Info:(id)a4 Index:(id)a5 entranceScene:(int)a6 thirdPartyLinkId:(id)a7 thirdPartyLinkStatus:(id)a8 thirdPartyLinkReportInfo:(id)a9;
+ (void)ReportEmoticonStoreActionWithScene:(int)a0 Action:(unsigned long long)a1 SessionId:(unsigned long long)a2 Pid:(id)a3 Info:(id)a4 Index:(id)a5 entranceScene:(int)a6 thirdPartyLinkId:(id)a7 thirdPartyLinkStatus:(id)a8 thirdPartyLinkReportInfo:(id)a9 reqId:(id)a10;
+ (int)entranceSceneFromRecord:(id)a0;
+ (id)safeReportString:(id)a0;
+ (void)ReportEmoticonDesignerIPExposure:(id)a0 hasFinder:(BOOL)a1 ipCount:(unsigned long long)a2 designerUin:(id)a3 ipTabClickCount:(unsigned long long)a4 emoticonClickCount:(unsigned long long)a5 emojiClickCount:(unsigned long long)a6;
+ (void)ReportEmoticonIPPageExposure:(id)a0 ipSetKey:(id)a1 designerUin:(id)a2 sendClick:(unsigned long long)a3;

@end
