@interface FlowVoiceCall.VoiceCallViewController : FlowCommon.FlowBaseViewController {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _shareProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _accessProvider;
    void /* unknown type, empty encoding */ _realTimeCallLiveActivityProvider;
    void /* unknown type, empty encoding */ _appJumpProvider;
    void /* unknown type, empty encoding */ _immersiveProvider;
    void /* unknown type, empty encoding */ _userConfigProvider;
    void /* unknown type, empty encoding */ _diversionProvider;
    void /* unknown type, empty encoding */ contentButtonsContainer;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ isAvatarLoadSuccess;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ presentVC;
    void /* unknown type, empty encoding */ isFirstAppear;
    void /* unknown type, empty encoding */ rootComponent;
    void /* unknown type, empty encoding */ themeMode;
    void /* unknown type, empty encoding */ themeStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_thinkingAnimateView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_speakingAnimateView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_silenceInterval;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarAreaView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionAreaView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_timerLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_recordPermissionStackView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_permissionButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_permissionHintLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sceneButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_diversionButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionSceneButton;
    void /* unknown type, empty encoding */ enterPageTime;
    void /* unknown type, empty encoding */ hasEnterFirstListening;
    void /* unknown type, empty encoding */ $__lazy_storage_$_feedbackGenerator;
    void /* unknown type, empty encoding */ muteUpdateItem;
    void /* unknown type, empty encoding */ muteShowEnoughTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_disclaimerView;
    void /* unknown type, empty encoding */ meterAnimator;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ debugLogViewCancellableSet;
    void /* unknown type, empty encoding */ voiceCallTimeLimitTimer;
    void /* unknown type, empty encoding */ hasShowDYAuthAlert;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceCallTimeLimit;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceCallTimeLimitCountDown;
    void /* unknown type, empty encoding */ $__lazy_storage_$_debugLinkLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_debugLogView;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)willResignActive;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)applicationDidBecomeActive;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
