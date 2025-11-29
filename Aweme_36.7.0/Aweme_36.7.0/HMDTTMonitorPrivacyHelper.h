@interface HMDTTMonitorPrivacyHelper : NSObject {
    _Atomic long long _tag;
}

@property (class, readonly) HMDTTMonitorPrivacyHelper *shared;

@property (copy) id /* block */ verifyBlock;
@property (copy) id /* block */ interceptorBlock;
@property long long tag;

+ (BOOL)dynamicVerifyTag:(long long)a0;

- (void)setTagVerifyBlock:(id /* block */)a0;
- (BOOL)verifyTag:(long long)a0;
- (void).cxx_destruct;

@end
