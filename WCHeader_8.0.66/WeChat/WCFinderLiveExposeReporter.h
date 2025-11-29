@interface WCFinderLiveExposeReporter : NSObject

+ (id)getReportStringWithAppendDictionary:(id)a0 originStr:(id)a1;
+ (void)reportDataItem:(id)a0 withAction:(long long)a1 withCommentScene:(id)a2 withIndex:(unsigned long long)a3 sessionExtraKey:(id)a4;
+ (void)reportDataItem:(id)a0 withAction:(long long)a1 withCommentScene:(id)a2 withIndex:(unsigned long long)a3 sessionExtraKey:(id)a4 channelExtra:(id)a5;
+ (void)reportDataItem:(id)a0 withAction:(long long)a1 withCommentScene:(id)a2 withIndex:(unsigned long long)a3 sessionExtraKey:(id)a4 channelExtra:(id)a5 livingObjectLiveId:(unsigned long long)a6;
+ (void)reportDataItem:(id)a0 withAction:(long long)a1 withCommentScene:(id)a2 withIndex:(unsigned long long)a3 sessionExtraKey:(id)a4 channelExtra:(id)a5 livingObjectLiveId:(unsigned long long)a6 actionTS:(unsigned long long)a7;
+ (void)reportFeedContentVM:(id)a0 withAction:(long long)a1 withCommentScene:(id)a2 withIndex:(unsigned long long)a3 channelExtra:(id)a4;
+ (void)reportFeedContentVM:(id)a0 withAction:(long long)a1 withCommentScene:(id)a2 withIndex:(unsigned long long)a3 channelExtra:(id)a4 livingObjectLiveId:(unsigned long long)a5;
+ (void)reportAction:(long long)a0 withCommentScene:(id)a1 withIndex:(unsigned long long)a2;
+ (void)reportContact:(id)a0 withAction:(long long)a1 withCommentScene:(id)a2 withIndex:(unsigned long long)a3;
+ (void)reportContact:(id)a0 withAction:(long long)a1 withCommentScene:(id)a2 withIndex:(unsigned long long)a3 channelExtra:(id)a4 feedID:(id)a5;
+ (void)reportExposedDataItem:(id)a0 withCommentScene:(id)a1 withIndex:(unsigned long long)a2 sessionExtraKey:(id)a3;
+ (void)reportExposedDataItem:(id)a0 withCommentScene:(id)a1 withIndex:(unsigned long long)a2 sessionExtraKey:(id)a3 channelExtra:(id)a4;
+ (void)reportClickAvatarDataItem:(id)a0 withCommentScene:(id)a1 withIndex:(unsigned long long)a2 sessionExtraKey:(id)a3 withLiveEffect:(BOOL)a4;
+ (void)reportEnterLiveDataItem:(id)a0 withFromVC:(id)a1 withCommentScene:(id)a2 withIndex:(unsigned long long)a3;
+ (void)reportOuterClick:(id)a0 withCommentScene:(id)a1 withShareType:(long long)a2 withShareUserName:(id)a3 sourceChatContact:(id)a4 withLiveStatus:(unsigned long long)a5 withTimelineFeedID:(id)a6 refEnterSessionId:(unsigned long long)a7 shareChatUserName:(id)a8 entranceGMsgID:(id)a9 shareScene:(long long)a10 channelExtra:(id)a11;
+ (void)reportOuterExposed:(id)a0 withCommentScene:(id)a1 withShareType:(long long)a2 withShareUserName:(id)a3 sourceChatContact:(id)a4 withLiveStatus:(unsigned long long)a5 withTimelineFeedID:(id)a6 entranceGMsgID:(id)a7 shareScene:(long long)a8;
+ (void)reportFinderLiveElementWithDataItem:(id)a0 actionType:(unsigned long long)a1 commentScene:(id)a2 elementId:(id)a3 eidUdfKv:(id)a4;
+ (void)reportFinderLiveElementWithActionType:(unsigned long long)a0 commentScene:(id)a1 elementId:(id)a2 eidUdfKv:(id)a3;
+ (void)reportFinderLiveElementWithActionType:(unsigned long long)a0 commentScene:(id)a1 elementId:(id)a2 username:(id)a3 sessionBuffer:(id)a4 eidUdfKv:(id)a5;
+ (void)reportFinderLiveGenericPageEnter:(id)a0 commentScene:(id)a1 pageUdfKv:(id)a2;
+ (void)reportFinderLiveGenericPageLeave:(id)a0 commentScene:(id)a1 stayTimeInMillisecond:(long long)a2 pageUdfKv:(id)a3;
+ (id)getLastEnterRoomScenenote;
+ (id)getLastEnterRoomCommentScene;
+ (long long)getLastEnterIconType;
+ (id)getLastEnterChannelExtra;
+ (id)getLastEnterFromScene;
+ (id)replaceCommaToSemicolon:(id)a0;
+ (void)reportExposeCompleteLiveVcAnchorDataContianer:(id)a0 liveId:(unsigned long long)a1;
+ (void)reportCompleteExtCardExpose:(id)a0 liveId:(unsigned long long)a1 putCard:(id)a2;
+ (void)reportCompleteExtCardClick:(id)a0 liveId:(unsigned long long)a1 putCard:(id)a2;
+ (void)reportExposeCompleteLiveVcAnchorPlayback:(id)a0 finderUsername:(id)a1 liveId:(unsigned long long)a2;
+ (void)reportExposeCompleteLiveVcAnchorLiveDiagnosis:(id)a0 liveId:(unsigned long long)a1 diagnosisTxt:(id)a2;
+ (void)reportExposeCompleteLiveVcAnchorNotice:(id)a0 liveId:(unsigned long long)a1;
+ (void)reportExposeCompleteLiveVcAnchorNoticeCreate:(id)a0 liveId:(unsigned long long)a1;
+ (void)reportClickCompleteLiveVcAnchorDataContianer:(id)a0 liveId:(unsigned long long)a1;
+ (void)reportClickCompleteLiveVcAnchorPlayback:(id)a0 finderUsername:(id)a1 liveId:(unsigned long long)a2;
+ (void)reportClickCompleteLiveVcAnchorLiveDiagnosis:(id)a0 liveId:(unsigned long long)a1;
+ (void)reportCompleteLiveVcAnchorLiveDatasWithType:(unsigned long long)a0 eid:(id)a1 finderUsername:(id)a2 eidUdfDic:(id)a3;
+ (void)reportClickCompleteLiveVcAnchorNotice:(id)a0 liveId:(unsigned long long)a1;
+ (void)reportClickCompleteLiveVcAnchorNoticeCreate:(id)a0 liveId:(unsigned long long)a1;
+ (void)reportPreviewRelatedLivesShowWithViewModel:(id)a0 dataItem:(id)a1 cardExpType:(unsigned long long)a2 indexInSpecialList:(unsigned long long)a3;
+ (void)reportPreviewRelatedDataItemsClickedWithViewModel:(id)a0 dataItem:(id)a1 indexInSpecialList:(unsigned long long)a2;

@end
