@interface RelaxEnv : NSObject {
    BOOL _isDebugAvailable;
}

+ (id)sharedInstance;

- (BOOL)isDevToolEnabled;
- (void)checkDebugAvailable;
- (void)enableDevTool:(BOOL)a0;
- (void)enableDevMenu:(BOOL)a0;
- (BOOL)isDevMenuEnabled;
- (void)setEnableNewAnimator:(BOOL)a0;
- (long long)renderType;
- (void)setRenderType:(long long)a0;
- (id)init;
- (long long)runtimeType;
- (void)setRuntimeType:(long long)a0;

@end
