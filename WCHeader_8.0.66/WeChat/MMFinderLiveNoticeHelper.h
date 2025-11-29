@interface MMFinderLiveNoticeHelper : NSObject

+ (void)getLiveNoticeStateWithAnchorUserName:(id)a0 noticeId:(id)a1 successfulBlock:(id /* block */)a2 failedBlock:(id /* block */)a3;
+ (void)reserveLiveNoticeWithAnchorUsername:(id)a0 noticeId:(id)a1 reserveOperation:(BOOL)a2 timeout:(double)a3 scene:(unsigned int)a4 noticeBussinessDic:(id)a5 gMsgID:(id)a6 successBlock:(id /* block */)a7 failBlock:(id /* block */)a8;
+ (void)getLiveNoticeInfoWithNoticeId:(id)a0 verifyInfo:(id)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
+ (void)showLiveNoticeFromJSAPIWithNoticeId:(id)a0 finderUserName:(id)a1 verifyInfo:(id)a2 preferEnterLive:(BOOL)a3 reserveLiveScene:(unsigned int)a4 commentScene:(id)a5 entryScene:(int)a6 cardType:(int)a7 sceneNote:(id)a8 fromVC:(id)a9 noticeBussinessDic:(id)a10 gMsgID:(id)a11 successBlock:(id /* block */)a12 failureBlock:(id /* block */)a13;
+ (void)showLiveNoticeFromJSAPIWithLiveNoticeResponse:(id)a0 preferEnterLive:(BOOL)a1 reserveLiveScene:(unsigned int)a2 commentScene:(id)a3 entryScene:(int)a4 cardType:(int)a5 sceneNote:(id)a6 fromVC:(id)a7 noticeBussinessDic:(id)a8 gMsgID:(id)a9 successBlock:(id /* block */)a10 failureBlock:(id /* block */)a11;
+ (void)handleStartedLiveReservationWithLiveNoticeResponse:(id)a0 reserveLiveScene:(unsigned int)a1 commentScene:(id)a2 entryScene:(int)a3 cardType:(int)a4 sceneNote:(id)a5 fromVC:(id)a6 noticeBussinessDic:(id)a7 gMsgID:(id)a8 successBlock:(id /* block */)a9 failureBlock:(id /* block */)a10;
+ (void)handleConcertLiveReservationWithLiveNoticeResponse:(id)a0 reserveLiveScene:(unsigned int)a1 commentScene:(id)a2 entryScene:(int)a3 cardType:(int)a4 sceneNote:(id)a5 fromVC:(id)a6 noticeBussinessDic:(id)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
+ (void)handleGenericLiveReservationWithLiveNoticeResponse:(id)a0 reserveLiveScene:(unsigned int)a1 commentScene:(id)a2 entryScene:(int)a3 cardType:(int)a4 sceneNote:(id)a5 fromVC:(id)a6 noticeBussinessDic:(id)a7 gMsgID:(id)a8 successBlock:(id /* block */)a9 failureBlock:(id /* block */)a10;
+ (id)showLiveNoticeDetail:(id)a0 anchorContact:(id)a1 showToastViewController:(id)a2 scene:(long long)a3 showInView:(id)a4 actionBlock:(id /* block */)a5 unLikeBlock:(id /* block */)a6 receiveCouponBlock:(id /* block */)a7;
+ (void)showLiveNoticeListWithFinderUserName:(id)a0 reserveLiveScene:(unsigned int)a1 fromVC:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
+ (void)showLiveNoticeListWithNoticeListInfo:(id)a0 reserveLiveScene:(unsigned int)a1 anchorContact:(id)a2 fromVC:(id)a3 successBlock:(id /* block */)a4 failureBlock:(id /* block */)a5;
+ (id)showLiveNoticeDetail:(id)a0 anchorContact:(id)a1 showToastViewController:(id)a2 scene:(long long)a3 showInView:(id)a4 showHideButton:(BOOL)a5 reportScene:(int)a6 actionBlock:(id /* block */)a7 unLikeBlock:(id /* block */)a8 receiveCouponBlock:(id /* block */)a9;
+ (id)showLiveNoticeDetail:(id)a0 anchorContact:(id)a1 showToastViewController:(id)a2 scene:(long long)a3 showInView:(id)a4 showHideButton:(BOOL)a5 showColumnView:(BOOL)a6 reportScene:(int)a7 actionBlock:(id /* block */)a8 unLikeBlock:(id /* block */)a9 receiveCouponBlock:(id /* block */)a10;

@end
