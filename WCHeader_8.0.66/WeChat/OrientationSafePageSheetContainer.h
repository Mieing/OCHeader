@interface OrientationSafePageSheetContainer : MMPageSheetContainerWindowController {
    unsigned long long _mask;
}

- (id)initWithSupportedOrientationMask:(unsigned long long)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
