@interface IESIMGroupAssistantTextUnderlineWordsPlugin : AWEIMFlexComponentSwiftAdapter <AWEIMMessageTextPluginProtocol> {
    void /* unknown type, empty encoding */ lastUnderlineWordsString;
    void /* unknown type, empty encoding */ didTrackedShow;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (BOOL)messageTextPluginNeedUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (id)modifyAttributedContentRanges:(id)a0 message:(id)a1 scene:(long long)a2;
- (id)modifyAttributedContent:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 message:(id)a2 scene:(long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
