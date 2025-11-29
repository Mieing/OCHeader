@class NSString;

@interface BDUGPushManager : NSObject <BDUGAccountEventProtocol>

@property BOOL isRequestInAir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)triggerAccountStatusEventWithStatus:(long long)a0;
+ (void)setLocalBadgeNumber:(long long)a0;
+ (BOOL)isUploadDeviceToken:(id)a0;
+ (id)eventNameForAccountStatus:(long long)a0;
+ (void)updateTokenDoneWithDeviceToken:(id)a0;
+ (void)sendRequestWithParam:(id)a0 completionHandler:(id /* block */)a1;
+ (long long)requestTypeForRequestParam:(id)a0;
+ (void)_sendRequestWithParam:(id)a0 retryTimes:(long long)a1 completionHandler:(id /* block */)a2;
+ (id)requestURLWithRequest:(id)a0;
+ (id)requestMethodTypeForRequestParam:(id)a0;
+ (id)getCommonParams;
+ (void)_networkDisposeWithParam:(id)a0 error:(id)a1 jsonObj:(id)a2 retryTimes:(long long)a3 startTime:(double)a4 completionHandler:(id /* block */)a5;
+ (void)monitorWithRequest:(id)a0 status:(BOOL)a1 error:(id)a2 startTime:(double)a3 isRetry:(BOOL)a4;
+ (void)trackRequest:(id)a0 retryTimes:(long long)a1 success:(BOOL)a2 error:(id)a3;
+ (void)requestParamWithRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (id)getChannelURLWithRequest:(id)a0;
+ (id)getUploadTokenURLWithRequest:(id)a0;
+ (id)getUploadSwitchURLWithRequest:(id)a0;
+ (id)getGetNoticeURLWithRequest:(id)a0;
+ (id)getSyncEventURLWithRequest:(id)a0;
+ (id)getRecallStrategyURLWithRequest:(id)a0;
+ (id)getReportNotificationWithRequest:(id)a0;
+ (id)getPullBadgeURLWithRequest:(id)a0;
+ (id)getChannelParamWithRequest:(id)a0;
+ (id)getUploadTokenParamWithRequest:(id)a0;
+ (id)getCommonParamDictWithRequest:(id)a0;
+ (id)getUploadSwitchParamWithRequest:(id)a0 systemPushStatus:(id)a1 iOS12NotifyStatus:(id)a2 detailPushStatus:(id)a3;
+ (id)getSyncEventParamWithRequest:(id)a0;
+ (id)getRecallStrategyParamWithRequest:(id)a0;
+ (id)getReportNotificationParamWithRequest:(id)a0;
+ (id)getPullBadgeParamWithRequest:(id)a0;
+ (BOOL)isSupportFrontier;
+ (void)enterForegroundAction;
+ (void)setLocalBadgeNumberWithScene:(id)a0;
+ (void)uploadNotificationCount;
+ (void)uploadNotificaitonCount:(long long)a0 badgeNumber:(long long)a1;
+ (void)pullBadge:(id)a0 completion:(id /* block */)a1;
+ (void)uploadTokenWithStatus:(long long)a0;
+ (void)monitorUidChangeWithStatus:(long long)a0 startTime:(double)a1;
+ (void)synchronizeAppGroupWithStatus:(long long)a0;
+ (void)setUpdateTokenLimitTimes:(double)a0;
+ (id)getSystemPushStatus;
+ (void)setIsRetryNetwork:(BOOL)a0 retryMaxTimes:(long long)a1 retryLimitInterval:(double)a2;
+ (void)handleDeviceToken:(id)a0;
+ (id)buildNotificationContentWith:(id)a0;
+ (id)buildNotificationContentWith:(id)a0 actionIdentifier:(id)a1 categoryIdentifier:(id)a2 responseInfo:(id)a3;
+ (void)addListener;
+ (void)pullBadgestrategy;
+ (void)reportSignalEvent;
+ (id)deviceToken;
+ (void)resignActive;
+ (id)sharedInstance;

- (void)resetTokenWithDelayTime:(double)a0;

@end
