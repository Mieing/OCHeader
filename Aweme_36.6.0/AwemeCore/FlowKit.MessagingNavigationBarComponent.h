@interface FlowKit.MessagingNavigationBarComponent : FlowCommon.TightCouplingComponent <FlowIMX.FlowIMBotServiceDelegate, FlowIMX.FlowIMConversationServiceDelegate> {
    void /* unknown type, empty encoding */ _backComponent;
    void /* unknown type, empty encoding */ _conversationInfoComponent;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _jumpProvider;
    void /* unknown type, empty encoding */ _accessProvider;
    void /* unknown type, empty encoding */ _diversionProvider;
    void /* unknown type, empty encoding */ _accessibilityModeProvider;
    void /* unknown type, empty encoding */ isExpand;
    void /* unknown type, empty encoding */ _botSettingsComponent;
    void /* unknown type, empty encoding */ _immersiveModeComponent;
    void /* unknown type, empty encoding */ _ttsToggleComponent;
    void /* unknown type, empty encoding */ _voiceCallComponent;
    void /* unknown type, empty encoding */ _shareComponent;
    void /* unknown type, empty encoding */ _subconversationComponent;
    void /* unknown type, empty encoding */ _temporaryChatComponent;
    void /* unknown type, empty encoding */ _caseComponent;
    void /* unknown type, empty encoding */ _createNewChatComponent;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _conversation;
    void /* unknown type, empty encoding */ _isMainBot;
    void /* unknown type, empty encoding */ _isImmersiveMode;
    void /* unknown type, empty encoding */ _shouldIgnorePagerContainer;
    void /* unknown type, empty encoding */ _shouldShowCreateConversation;
    void /* unknown type, empty encoding */ _shouldShowCreateNewChatButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shouldSwapTTSButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ preloadAppStoreVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_awemeAvatarButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationInfoView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationExpandButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationCloseButton;
    void /* unknown type, empty encoding */ isCurrentPagerAsChat;
    void /* unknown type, empty encoding */ trailingItems;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBarHelper;
}

- (void)botInfoDidChange:(id)a0 updateBotType:(id)a1;
- (void)conversationLastMessageChanged:(id)a0;
- (void)conversationDidForceDelete:(id)a0;
- (void)conversationDidCreateRemote:(id)a0 from:(id)a1;
- (void)conversationInfosChanged:(id)a0;
- (void)onClickAwemeAvatarButton;
- (void)onClickLeftAvatarButton;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)dealloc;

@end
