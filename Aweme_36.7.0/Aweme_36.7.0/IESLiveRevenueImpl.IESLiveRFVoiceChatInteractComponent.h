@interface IESLiveRevenueImpl.IESLiveRFVoiceChatInteractComponent : NSObject <IESLiveRevenueImpl.IESLiveRFVoiceChatAIStateAction> {
    void /* unknown type, empty encoding */ executingAnimator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_heartIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_callBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_turnOffBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_micBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transitionTipLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_interruptBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chatTipLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listenAnimView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_waitImgView;
}

- (void)didStateChangeFromState:(long long)a0 toState:(long long)a1;
- (void)didSetAttachingDIContext;
- (void)onBackBtnClicked;
- (void)onCallBtnClicked;
- (void)onTurnOffBtnClicked;
- (void)onMicBtnClicked;
- (void)onInterruptBtnClicked;
- (void).cxx_destruct;
- (id)init;

@end
