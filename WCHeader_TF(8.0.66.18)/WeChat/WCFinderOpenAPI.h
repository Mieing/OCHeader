@interface WCFinderOpenAPI : NSObject

+ (void)getLiveNoticeStateWithAnchorUserName:(id)a0 noticeId:(id)a1 successfulBlock:(id /* block */)a2 failedBlock:(id /* block */)a3;
+ (void)reserveLiveNoticeWithAnchorUsername:(id)a0 noticeId:(id)a1 reserveOperation:(BOOL)a2 timeout:(double)a3 scene:(unsigned int)a4 noticeBussinessDic:(id)a5 gMsgID:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
+ (void)getLiveNoticeInfoWithNoticeId:(id)a0 verifyInfo:(id)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
+ (void)handleReservationWithLiveNoticeResponse:(id)a0 preferEnterLive:(BOOL)a1 commentScene:(id)a2 entryScene:(int)a3 cardType:(int)a4 sceneNote:(id)a5 fromVC:(id)a6 noticeBussinessDic:(id)a7 gMsgID:(id)a8 successBlock:(id /* block */)a9 failureBlock:(id /* block */)a10;
+ (void)handleStartedLiveReservationWithLiveNoticeResponse:(id)a0 commentScene:(id)a1 entryScene:(int)a2 cardType:(int)a3 sceneNote:(id)a4 fromVC:(id)a5 noticeBussinessDic:(id)a6 gMsgID:(id)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
+ (void)handleConcertLiveReservationWithLiveNoticeResponse:(id)a0 commentScene:(id)a1 entryScene:(int)a2 cardType:(int)a3 sceneNote:(id)a4 fromVC:(id)a5 noticeBussinessDic:(id)a6 successBlock:(id /* block */)a7 failureBlock:(id /* block */)a8;
+ (void)reportConcertLiveReservationWithLiveNoticeResponse:(id)a0 commentScene:(id)a1 entryScene:(int)a2 cardType:(int)a3 sceneNote:(id)a4 fromVC:(id)a5 noticeBussinessDic:(id)a6;
+ (void)handleGenericLiveReservationWithLiveNoticeResponse:(id)a0 commentScene:(id)a1 entryScene:(int)a2 cardType:(int)a3 sceneNote:(id)a4 fromVC:(id)a5 noticeBussinessDic:(id)a6 gMsgID:(id)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
+ (void)getLiveStatusWithUserName:(id)a0 liveID:(id)a1 successfulBlock:(id /* block */)a2 failedBlock:(id /* block */)a3;
+ (void)getLiveStatusWithUserName:(id)a0 liveID:(id)a1 scene:(unsigned int)a2 disableLocalCache:(BOOL)a3 successfulBlock:(id /* block */)a4 failedBlock:(id /* block */)a5;
+ (void)showLiveRoomWithExportObject:(id)a0 fromVC:(id)a1 customParam:(id)a2 completation:(id /* block */)a3;
+ (void)showLiveRoomWithUserName:(id)a0 fromVC:(id)a1 customParam:(id)a2 completation:(id /* block */)a3;
+ (void)showLiveRoomWithUserName:(id)a0 feedExportId:(id)a1 feedNonceId:(id)a2 fromVC:(id)a3 timeout:(double)a4 customParam:(id)a5 replayEntryType:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
+ (void)showLiveRoomWithUserName:(id)a0 feedExportIdArray:(id)a1 selectedIdIndex:(int)a2 feedNonceId:(id)a3 fromVC:(id)a4 timeout:(double)a5 customParam:(id)a6 replayEntryType:(id)a7 successBlock:(id /* block */)a8 failBlock:(id /* block */)a9;
+ (void)realShowLiveRoomWithUserName:(id)a0 feedExportId:(id)a1 feedNonceId:(id)a2 fromVC:(id)a3 verifyInfo:(id)a4 scenenote:(id)a5 timeout:(double)a6 showRecommend:(BOOL)a7 customParam:(id)a8 replayEntryType:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
+ (void)invokeToOpenLive:(id /* block */)a0 dataItem:(id)a1;
+ (void)showLiveRoomWithUserName:(id)a0 feedExportIdArray:(id)a1 selectedIdIndex:(int)a2 feedNonceId:(id)a3 fromVC:(id)a4 verifyInfo:(id)a5 scenenote:(id)a6 timeout:(double)a7 customParam:(id)a8 replayEntryType:(id)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
+ (void)getTemplateLiveUrlWithEncryptedID:(id)a0 nonceID:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
+ (void)getFinderLiveMicInfoWithEncryptedId:(id)a0 nonceId:(id)a1 success:(id /* block */)a2 failure:(id /* block */)a3;
+ (BOOL)pushFinderViewControllerFromJSAPIWithCurrentNavController:(id)a0 customParam:(id)a1 extraParams:(id)a2;
+ (void)pushFinderProfileWithExportUserName:(id)a0 currentNavController:(id)a1 cardType:(int)a2 enterScene:(int)a3 functionalParams:(id)a4 reportExtraInfo:(id)a5;
+ (void)pushFinderProfileWithUserName:(id)a0 currentNavController:(id)a1 cardType:(int)a2 enterScene:(int)a3 functionalParams:(id)a4 reportExtraInfo:(id)a5;
+ (void)pushFinderFeedWithFeedId:(id)a0 nonceID:(id)a1 currentNavController:(id)a2 shareScene:(unsigned long long)a3 cardType:(int)a4 functionalParams:(id)a5 reportExtraInfo:(id)a6;
+ (void)pushFinderFeedWithEncrytedId:(id)a0 nonceID:(id)a1 currentNavController:(id)a2 shareScene:(unsigned long long)a3 cardType:(int)a4 functionalParams:(id)a5 reportExtraInfo:(id)a6;
+ (void)pushFinderFeedWithEncrytedId:(id)a0 nonceID:(id)a1 currentNavController:(id)a2 shareScene:(unsigned long long)a3 cardType:(int)a4 requestScene:(int)a5 functionalParams:(id)a6 reportExtraInfo:(id)a7;
+ (void)getFinderContactWithUsername:(id)a0 commentScene:(int)a1 successfulBlock:(id /* block */)a2 failedBlock:(id /* block */)a3;

@end
