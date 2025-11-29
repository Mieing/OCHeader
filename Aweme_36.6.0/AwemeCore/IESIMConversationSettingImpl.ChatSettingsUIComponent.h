@interface IESIMConversationSettingImpl.ChatSettingsUIComponent : AWEIMComponentBase <IESIMChatSettingsUIInterface, IESIMCustomBubbleWindowViewDelegate> {
    void /* unknown type, empty encoding */ bubbleView;
    void /* unknown type, empty encoding */ viewContainer;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ bottomContainer;
    void /* unknown type, empty encoding */ autoHandleThemeChanged;
}

- (void)inAppUserInterfaceStyleDidChanged;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)showBubble:(id)a0 onView:(id)a1;
- (void)addViewToButtomContainer:(id)a0;
- (void)disableAutoHandleThemeChanged;
- (void)dismissBubble;
- (void).cxx_destruct;
- (id)init;
- (void)setContentView:(id)a0;
- (void)dealloc;
- (id)arrowImage;
- (id)navigationBarView;

@end
