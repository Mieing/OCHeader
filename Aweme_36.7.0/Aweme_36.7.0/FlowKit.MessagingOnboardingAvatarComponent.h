@interface FlowKit.MessagingOnboardingAvatarComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMBotServiceDelegate> {
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _mainBotOnBoardingCharacterButtonNeedShow;
    void /* unknown type, empty encoding */ bigAvatarFallbackImage;
    void /* unknown type, empty encoding */ disableBigAvatarAnimation;
    void /* unknown type, empty encoding */ lastShowBigAvatar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topInsetWhenShowBigAvatar;
    void /* unknown type, empty encoding */ isAfterClearHistoryMessages;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bigAvatarView;
    void /* unknown type, empty encoding */ forceShowBigAvatar;
    void /* unknown type, empty encoding */ forceShowBigAvatarForOboardingMessage;
}

- (void)botInfoDidChange:(id)a0 updateBotType:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
