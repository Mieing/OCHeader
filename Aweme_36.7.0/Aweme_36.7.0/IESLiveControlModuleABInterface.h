@interface IESLiveControlModuleABInterface : NSObject

+ (id)audienceClarityInterfaceWithDIContext:(id)a0;
+ (id)replayInterfaceWithDIContext:(id)a0;
+ (void)disableLongPressForReason:(long long)a0 withDIContext:(id)a1;
+ (void)enableLongPressForReason:(long long)a0 withDIContext:(id)a1;
+ (id)streamQualityInterfaceWithDIContext:(id)a0;
+ (id)tapContainerInterfaceWithDIContext:(id)a0;
+ (id)taskInterfaceWithDIContext:(id)a0;
+ (id)minorRefundInterfaceWithDIContext:(id)a0;
+ (id)backRecordInterfaceWithDIContext:(id)a0;
+ (id)audienceCurrentLiveFlvUrlInfoWith:(BOOL)a0 withDIContext:(id)a1;
+ (id)getCurrentScreenshotImageNeedCleanData:(BOOL)a0 withDIContext:(id)a1;
+ (void)addLongPressPanelItemWithIcon:(id)a0 title:(id)a1 action:(id /* block */)a2 identifier:(id)a3 withDIContext:(id)a4;
+ (void)openNotificationPanelFromPreAnnouncement:(BOOL)a0 appointmentBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2 withDIContext:(id)a3;
+ (id)streamQualityCurrentLiveFlvUrlInfoWith:(BOOL)a0 withDIContext:(id)a1;
+ (void)loadStreamQualityToolBarItemWithDIContext:(id)a0;
+ (void)removeStreamQualityToolBarItemWithDIContext:(id)a0;
+ (id)streamQualityCurrentKeyWithDIContext:(id)a0;
+ (BOOL)isBackRecordingWithDIContext:(id)a0;

@end
