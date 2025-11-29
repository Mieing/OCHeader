@class NSString, VideoVoipCSCallerView, MMVoipCSMainWindow, MMVoipToastWindow;

@interface VoipCSUIManager : MMUserService <MMKernelExt, MMVoipCSMainWindowDelegate, VideoVoipCSViewDelegate, MMServiceProtocol, IVOIPExt, MMConfigMgrExt>

@property (retain, nonatomic) MMVoipCSMainWindow *m_mainWindow;
@property (retain, nonatomic) MMVoipToastWindow *m_voipCSToastWindow;
@property (retain, nonatomic) VideoVoipCSCallerView *m_videoVoipCSViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canStartVideoWithContact:(id)a0;
+ (BOOL)canForceStartVoiceWithContact:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)canStartVoip;
- (void)openVideoVoipCSViewWithBizUserName:(id)a0 andMsgWrap:(id)a1 isEarMode:(BOOL)a2 appid:(id)a3 headUrl:(id)a4 isAllowBackCamera:(BOOL)a5 isShowCSVideo:(BOOL)a6 context:(id)a7;
- (BOOL)isTheSameContactWithCurrentVoip:(id)a0;
- (BOOL)showVideoEntranceInMainFrame;
- (BOOL)isViewEnding;
- (BOOL)isVoipWorking;
- (BOOL)isVideoVoipWorking;
- (BOOL)isVoipSpeakerMode;
- (void)showConflictWording;
- (id)getConflictWording;
- (void)showCannotStartVoipTwice;
- (BOOL)isMinimizeMode;
- (void)addScrollingString:(id)a0 withDisplayTime:(double)a1;
- (BOOL)isUsingEarDevice;
- (void)clearCurrentString;
- (void)switchToSpeakPhoneMode:(BOOL)a0;
- (void)onVideoVoipCSViewClose;
- (void)onVideoVoipCSViewChangeToMinimizeMode;
- (BOOL)onVideoVoipCSViewRequestMinimizeStatus;
- (void)onMMVoipCSMainWindowExtendAnimationDidEnd;
- (void)onMMVoipCSMainWindowQuitAnimationWillStart;
- (void)onMMVoipCSMainWindowQuitAnimationDidEnd;
- (void)onMMVoipCSMainWindowCollapseAnimationDidEnd;
- (void)onMMVoipCSMainWindowCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMMVoipCSMainWindowExtendFromCollapseAnimationDidEnd;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })onMMVoipCSMainWindowRequestMinimizeFrame;
- (void)Cancel;
- (void)OnTellMeViewIsExist:(BOOL *)a0;
- (void)onMMDynamicConfigUpdated;
- (void)onPreQuit;
- (void).cxx_destruct;

@end
