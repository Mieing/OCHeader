@interface AWEIMMangoReflowMessageComponent : AWEIMFlexComponentSwiftAdapter {
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ bind;
    void /* unknown type, empty encoding */ backgroundInterface;
    void /* unknown type, empty encoding */ lastTapTimestamp;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
