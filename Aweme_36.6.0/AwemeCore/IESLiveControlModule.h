@class NSString;

@interface IESLiveControlModule : IESLiveModule <IESLiveRoomControlService, IESLiveControlModule>

@property (readonly, nonatomic) BOOL hadShowPublicPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isBackRecording;

- (id)replayInterface;
- (id)resolutionInterface;
- (id)taskInterface;
- (id)minorRefundInterface;
- (id)playerControlTipInterface;
- (id)audienceClarityInterface;
- (id)tapContainerInterface;
- (id)streamQualityInterface;
- (id)backRecordInterface;
- (id)getCurrentScreenshotImageNeedCleanData:(BOOL)a0;
- (void)openNotificationPanelFromPreAnnouncement:(BOOL)a0 appointmentBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)addLongPressPanelItemWithIcon:(id)a0 title:(id)a1 action:(id /* block */)a2 identifier:(id)a3;
- (void)disableLongPressForReason:(long long)a0;
- (void)enableLongPressForReason:(long long)a0;
- (void)loadStreamQualityToolBarItem;
- (void)removeStreamQualityToolBarItem;
- (id)streamQualityCurrentKey;
- (id)streamQualityCurrentLiveFlvUrlInfoWith:(BOOL)a0;
- (id)audienceCurrentLiveFlvUrlInfoWith:(BOOL)a0;
- (void)setHadShowPublicPanel:(BOOL)a0;
- (id)provideServices;

@end
