@interface AWETokamakImageTeaMonitor : AWETokamakImageMonitor {
    long long _memorySizeThreshold;
}

- (void)receiveImageModel:(id)a0;
- (id)_generateViewPathForModel:(id)a0;
- (id)initWithConfig:(id)a0;

@end
