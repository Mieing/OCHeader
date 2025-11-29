@class NSString, WAWebActionSheet;

@interface WAJSContextPlugin_system : WAJSContextPluginBase <IMMLanguageMgrExt, WAWebActionSheetDelegate> {
    BOOL _oldIdleTimerDisabled;
    BOOL _idleTimerDisabled;
    BOOL _idleTimeChnaged;
}

@property (retain, nonatomic) WAWebActionSheet *actionSheet;
@property (nonatomic) BOOL enableTranslateLanguage;
@property (nonatomic) BOOL autoTranslateLanguage;
@property (nonatomic) long long buttonTranslateState;
@property (nonatomic) long long pageTranslateState;
@property (nonatomic) long long capsuleTranslateState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)didTakeScreenshot;
- (void)setIdleTimeDisable:(BOOL)a0;
- (void)restoreIdleTime;
- (BOOL)getIdleTimeDisable;
- (void)onSplashAdDidFinished;
- (void)onPageStateDecideTimeout;
- (void)onTranslateStateDecideTimeout;
- (id)getCapsuleView;
- (void)onCapsuleTranslate;
- (void)onCapsuleTranslateDoing;
- (void)onCapsuleMore;
- (void)onCapsuleExit;
- (void)onMenuTranslate;
- (void)onMenuTranslateRevert;
- (void)onMenuChangeTranslateLanguage;
- (void)sendTranslateEntryClickEvent:(BOOL)a0;
- (void)onTranslateLanguageChange;
- (void)onCancel;
- (void)onSelected:(long long)a0;
- (void).cxx_destruct;

@end
