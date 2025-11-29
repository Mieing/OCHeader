@interface MultitalkKvReport : NSObject

+ (void)callReportWithResult:(unsigned int)a0;
+ (void)receiveReportWithResult:(unsigned int)a0 groupId:(id)a1;
+ (void)connectReportWithResult:(unsigned int)a0 roleType:(unsigned int)a1 consuming:(long long)a2 groupId:(id)a3 failedReason:(unsigned int)a4;
+ (void)durationReportWithDuration:(unsigned int)a0 groupId:(id)a1;
+ (void)selectContactReportWithSelectedContactCount:(unsigned int)a0 hasReachLimit:(unsigned int)a1 scene:(unsigned int)a2 selectedContactFromGroupCount:(unsigned int)a3 groupId:(id)a4 clickCount:(unsigned int)a5;
+ (void)videoDurationReportWithDuration:(unsigned int)a0 groupId:(id)a1;
+ (void)functionGroupId:(id)a0 minimizeClick:(unsigned int)a1 muteClick:(unsigned int)a2 speakerClick:(unsigned int)a3 videoClick:(unsigned int)a4 addMemberClick:(unsigned int)a5;
+ (void)minimizeClickWithGroupId:(id)a0 withMode:(unsigned int)a1 action:(unsigned int)a2;
+ (void)reportClickEnterButtonOfBanner:(BOOL)a0 overLimit:(BOOL)a1 result:(BOOL)a2 wxGroupId:(id)a3 roomid:(unsigned long long)a4 roomkey:(unsigned long long)a5;
+ (void)reportClickCancelButtonOfBanner:(BOOL)a0 overLimit:(BOOL)a1 result:(BOOL)a2 wxGroupId:(id)a3 roomid:(unsigned long long)a4 roomkey:(unsigned long long)a5;
+ (void)reportClickCancelButtonForRejectOfBanner:(BOOL)a0 overLimit:(BOOL)a1 result:(BOOL)a2 wxGroupId:(id)a3 roomid:(unsigned long long)a4 roomkey:(unsigned long long)a5;
+ (void)reportClickBannerWhenReachLimit:(BOOL)a0 wxGroupId:(id)a1 roomid:(unsigned long long)a2 roomkey:(unsigned long long)a3;
+ (void)reportActionType:(unsigned int)a0 status:(unsigned int)a1 roomid:(unsigned long long)a2 roomkey:(unsigned long long)a3;
+ (void)reportOperationArrowBtnExposeWithExpand:(BOOL)a0 roomKey:(unsigned long long)a1 roomId:(unsigned long long)a2;
+ (void)reportOperationArrowBtnClickWithExpand:(BOOL)a0 roomKey:(unsigned long long)a1 roomId:(unsigned long long)a2;
+ (void)reportScreenSharingWithGroupId:(id)a0 sessionId:(unsigned int)a1 screenType:(long long)a2 actionType:(long long)a3 userType:(long long)a4;

@end
