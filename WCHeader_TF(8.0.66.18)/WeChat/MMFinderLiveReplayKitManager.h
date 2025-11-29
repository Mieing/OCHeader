@class MMFinderScreenRecordGuideView, RPSystemBroadcastPickerView, NSString;

@interface MMFinderLiveReplayKitManager : NSObject <IRecordPermissionCheckExt>

@property (retain, nonatomic) MMFinderScreenRecordGuideView *screenRecordGuideView;
@property (retain, nonatomic) RPSystemBroadcastPickerView *broadcastPickerView;
@property (nonatomic) BOOL isRecordPermissionCheckOK;
@property (nonatomic) BOOL isInRecordPermissionCheckProcess;
@property (nonatomic) BOOL isOpenRecordLive;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (nonatomic) BOOL isBroadcastRecording;
@property (nonatomic) BOOL isHeadsetConnected;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ screenRecordChangeBlock;
@property (copy, nonatomic) id /* block */ liveReportActionBlock;
@property (copy, nonatomic) id /* block */ starterReportActionBlock;
@property (copy, nonatomic) id /* block */ headsetConnectedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)clearService;
- (void)setUpService;
- (id)init;
- (void)routeChange:(id)a0;
- (void)stopRecordScreen;
- (void)hideScreenRecordGuideView;
- (void)checkScreenCaptureState:(BOOL)a0;
- (void)startRecordScreenWithScene:(unsigned long long)a0 completeBlock:(id /* block */)a1 starterReportActionBlock:(id /* block */)a2 liveReportActionBlock:(id /* block */)a3;
- (BOOL)broadcastRecording;
- (BOOL)checkAbnormalState;
- (BOOL)isAbnormalState;
- (void)handleReplayKitManagerCompleteWithType:(long long)a0 completeBlock:(id /* block */)a1;
- (void)showRecordGuideView;
- (void)updateOpenRecordLive:(BOOL)a0;
- (void)inner_startRecordScreen;
- (id)getBroadCastBundleIdentifier;
- (void)checkPermissionsWithCompleteBlock:(id /* block */)a0;
- (unsigned long long)systemCapabilityAuthScene;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (id)currentRecordGuideView;
- (void)onBroadcastStarted;
- (void)onBroadcastStop;
- (void)onBecomeActive;
- (void).cxx_destruct;

@end
