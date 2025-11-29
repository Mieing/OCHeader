@interface IESIMAskGroupAssistantTailComponent : AWEIMFlexComponentSwiftAdapter <IESIMAskGroupAssistantTailDetectAction, IESIMDidSendMessageAction> {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ didShow;
    void /* unknown type, empty encoding */ didAskedInMemory;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)userDidSendMessageWithNoti:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)askGroupAssistantMessageDetect:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
