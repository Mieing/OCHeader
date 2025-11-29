@interface AWEFormatProfileCommonComponent : AWEIMComponentBase <AWEFormatConversationSettingInjectService, AWEConversationFormatEnterActions, AWEFormatIMConversationInjectLeftPaneGesBlockInterface> {
    void /* unknown type, empty encoding */ reportUrl;
    void /* unknown type, empty encoding */ reportSchema;
    void /* unknown type, empty encoding */ roomInfo;
}

- (BOOL)shouldFailFloatGestureRecognizer:(id)a0;
- (void)didUpdateFormatRoom:(id)a0;
- (id)displayInfoForFormat;
- (void)openFormatProfileInPrivateChat;
- (void)openFormatProfileInFormatChatSetting;
- (void)openFormatReport;
- (void)clearAllHistory;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isSelf;

@end
