@interface RelaxEnv : NSObject {
    BOOL _isRelaxDebugEnabled;
    BOOL _isDebugAvailable;
}

+ (id)sharedInstance;

- (BOOL)isRelaxDebugEnabled;
- (void)checkDebugAvailable;
- (void)setRelaxDebugEnabled:(BOOL)a0;
- (void)setRenderType:(long long)a0;
- (id)init;
- (long long)runtimeType;
- (void)setRuntimeType:(long long)a0;

@end
