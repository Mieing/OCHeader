@interface IESIMGroupAssistantReplyTailComponent : AWEIMFlexComponentSwiftAdapter <IESIMGroupAssistantReplyTailDetectAction> {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ didShow;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)groupAssistantMessageDetect:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
