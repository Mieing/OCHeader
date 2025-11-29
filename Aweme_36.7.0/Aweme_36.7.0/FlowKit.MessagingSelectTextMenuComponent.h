@interface FlowKit.MessagingSelectTextMenuComponent : FlowCommon.TightCouplingComponent <FlowKit.MessagingListViewEventListener, FlowIMX.FlowIMBotServiceDelegate> {
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _conversation;
    void /* unknown type, empty encoding */ _continuousSpeakComponent;
    void /* unknown type, empty encoding */ _ttsToggleComponent;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ selectText;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ menu;
    void /* unknown type, empty encoding */ lastPositionY;
    void /* unknown type, empty encoding */ clickFrom;
}

- (void)scrollViewDidScroll:(id)a0;
- (void)botInfoDidChange:(id)a0 updateBotType:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
