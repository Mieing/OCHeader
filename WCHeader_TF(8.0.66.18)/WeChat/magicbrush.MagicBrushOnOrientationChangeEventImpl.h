@interface magicbrush.MagicBrushOnOrientationChangeEventImpl : _TtCs12_SwiftObject <magicbrush.IMagicBrushJsEventImpl> {
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ lastOrientation;
}

- (void)onStartListen;
- (void)onStopListen;
- (void)deviceOrientationDidChange;

@end
