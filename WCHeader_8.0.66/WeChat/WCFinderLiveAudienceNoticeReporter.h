@class NSMutableSet;

@interface WCFinderLiveAudienceNoticeReporter : NSObject {
    NSMutableSet *_displayedNoticeIDs;
    NSMutableSet *_displayedDetailNoticeIDs;
}

+ (void)reportNoticeOperation:(long long)a0 withUsername:(id)a1 withLiveId:(unsigned long long)a2 withLiveStatus:(unsigned int)a3 withCommentScene:(id)a4 withForceNoticeInfo:(id)a5 withNoticeContent:(id)a6 chnlExtraDic:(id)a7;
+ (void)reportNoticeOperation:(id)a0 withNoticeInfo:(id)a1 withCommentScene:(id)a2 actionType:(unsigned long long)a3;
+ (void)reportNoticeOperation:(id)a0 withNoticeInfo:(id)a1 withCommentScene:(id)a2 actionType:(unsigned long long)a3 liveId:(unsigned long long)a4;
+ (void)reportNoticeOperation:(long long)a0 withUsername:(id)a1 noticeInfo:(id)a2 commentScene:(id)a3 sourceScene:(id)a4 fromSourceScene:(id)a5 channelExtra:(id)a6 dataItem:(id)a7;
+ (void)reportNoticeOperation:(long long)a0 withUsername:(id)a1 noticeInfo:(id)a2 commentScene:(id)a3 channelExtra:(id)a4 dataItem:(id)a5;
+ (void)reportNoticeCommonAction:(unsigned long long)a0 commentScene:(int)a1 elementId:(id)a2 noticeInfo:(id)a3 eidUdfKv:(id)a4;
+ (void)reportNextLiveNoticeOperation:(long long)a0 username:(id)a1 withCommentScene:(id)a2;
+ (id)replaceCommaToSemicolon:(id)a0;

- (id)init;
- (void)reportNoticeOperationWithParams:(id)a0;
- (void)reportNoticeOperation:(long long)a0 withUsername:(id)a1 noticeInfo:(id)a2 actionInfo:(id)a3 commentScene:(id)a4;
- (void)reportNoticeOperation:(long long)a0 withUsername:(id)a1 sceneNote:(id)a2 noticeInfo:(id)a3 commentScene:(id)a4 noticeBussinessDic:(id)a5;
- (void)reportNoticeOperation:(long long)a0 username:(id)a1 withNoticeInfo:(id)a2 withCommentScene:(int)a3 feedID:(id)a4 isFromNoticeDetail:(BOOL)a5 sourceScene:(id)a6 fromSourceScene:(id)a7 channelExtra:(id)a8;
- (void).cxx_destruct;

@end
