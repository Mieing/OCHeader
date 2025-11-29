@interface Ultramarine.DiskStorage : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ directory;
    void /* unknown type, empty encoding */ sizeLimit;
    void /* unknown type, empty encoding */ countLimit;
    void /* unknown type, empty encoding */ trimRatio;
    void /* unknown type, empty encoding */ observeTask;
    void /* unknown type, empty encoding */ fileCountOfLastCheck;
    void /* unknown type, empty encoding */ diskCostOfLastCheck;
    void /* unknown type, empty encoding */ fileManager;
}

- (void)doDeepClean;
- (void)scheduleNextSweep;

@end
