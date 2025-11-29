@class NSString;

@interface AWEFeedPendantLinkMonitor : NSObject <AWEFeedPendantLinkMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMonitor;

- (void)monitorEventName:(id)a0 status:(long long)a1 params:(id)a2;
- (void)monitorFeedPendantDataRequestWithStatus:(unsigned long long)a0 params:(id)a1;
- (void)monitorPushServiceWithStatus:(unsigned long long)a0 params:(id)a1;
- (void)monitorPollingSettingsWithStatus:(unsigned long long)a0 params:(id)a1;
- (void)monitorFeedPendantDowngradeByPollingSettingsFPWithParams:(id)a0;
- (void)monitorFeedPendantDowngradeByPollingSettingsAPWithParams:(id)a0;
- (void)monitorFeedPendantReceivedStatusChangeNotificationWithParams:(id)a0;
- (void)monitorFeedPendantActivityBlockedByLuckyDogWithParams:(id)a0;
- (void)monitorFeedPendantLimitedActivityBlockedByPollingSettingsWithParams:(id)a0;
- (void)monitorFeedPendantLimitedActivityNotFoundCidWithParams:(id)a0;
- (void)monitorFeedPendantDataSplitCompleteWithParams:(id)a0;
- (void)monitorFeedPendantStageChangeEventWithParams:(id)a0;
- (void)monitorFeedPendantShowEventWithParams:(id)a0;
- (void)monitorFeedPendantResourceLoadWithStauts:(unsigned long long)a0 params:(id)a1;
- (void)monitorFeedPendantClickEventWithParams:(id)a0;
- (void)monitorFeedPendantCloseEventWithParams:(id)a0;
- (void)monitorFeedPendantCloseCollapseEventWithParams:(id)a0;
- (void)monitorFeedPendantStateChangeEventWithParams:(id)a0;
- (void)monitorFeedPendantPerformLottieWithStatus:(unsigned long long)a0 params:(id)a1;
- (void)monitorFeedPendantBubbleShowWithparams:(id)a0;
- (void)monitorFeedPendantStartTimingTaskWithParams:(id)a0;
- (void)monitorFeedPendantTimingTaskResumeFromCacheWithParams:(id)a0;
- (void)monitorFeedPendantTimingTaskCompleteWithParams:(id)a0;
- (void)monitorFeedPendantTaskReportStatus:(long long)a0 params:(id)a1;
- (void)monitorFeedPendantAlphaVideoPlayFailedWithParams:(id)a0;
- (void)monitorFeedPendantAlphaVideoPlayRetrySuccessfullyWithParams:(id)a0;
- (void)monitorActivityStageTimeCalibratorFail:(id)a0;
- (void)monitorActivityStageChangedWithStatus:(unsigned long long)a0 params:(id)a1;
- (void)monitorActivityStageChangeDataToActivityStatus:(unsigned long long)a0 params:(id)a1;
- (void)monitorActivityStageDataMatchMaterialFail:(unsigned long long)a0 params:(id)a1;
- (void)monitorDynamicSettingDataStatus:(unsigned long long)a0 params:(id)a1;
- (void)monitorCloseSideBarShowWithStatus:(unsigned long long)a0 params:(id)a1;
- (void)monitorFeedPendantDisappear:(unsigned long long)a0 params:(id)a1;

@end
