@class NSString;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_Recorder : WAWebViewPluginBase <IRecordPermissionCheckExt, IWebviewRecorderManagerExt, IVOIPUILogicMgrExt, MultiTalkMgrExt>

@property (nonatomic) BOOL isCheckingPermission;
@property (nonatomic) unsigned long long duration;
@property (weak, nonatomic) id<IWAWebViewPluginDelegate> resultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)startRecorderForDuration:(unsigned long long)a0;
- (void)stopRecorder;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)realStartRecord;
- (void)registerRecordingPrivacy;
- (void)unregisterRecordingPrivacy;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)onStartRecord:(long long)a0;
- (void)onRecordTimeTooShort;
- (void)onFinishedRecord:(id)a0 ErrCode:(int)a1 stopReason:(long long)a2;
- (void)onVideoVoipViewDidAppear:(id)a0;
- (void)onBeginMultiTalk;
- (void).cxx_destruct;

@end
