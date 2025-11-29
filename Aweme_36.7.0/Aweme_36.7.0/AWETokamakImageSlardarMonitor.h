@interface AWETokamakImageSlardarMonitor : AWETokamakImageMonitor {
    long long _memorySizeThreshold;
    BOOL _enableUserInfo;
}

+ (void)reportImageOnMainThread:(id)a0 withExceptionName:(id)a1 useUserInfo:(BOOL)a2;

- (void)receiveImageModel:(id)a0;
- (id)initWithConfig:(id)a0;

@end
