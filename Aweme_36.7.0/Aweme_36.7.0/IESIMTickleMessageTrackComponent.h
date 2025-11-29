@interface IESIMTickleMessageTrackComponent : AWEIMFlexComponentSwiftAdapter <IESIMTickleMessageTrackInterface> {
    void /* unknown type, empty encoding */ hasTrackedTickle;
    void /* unknown type, empty encoding */ hasTrackedTickleGuide;
    void /* unknown type, empty encoding */ hasTrackedTickleColdStart;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)trackTickleMessageGuideClick;
- (id)init;

@end
