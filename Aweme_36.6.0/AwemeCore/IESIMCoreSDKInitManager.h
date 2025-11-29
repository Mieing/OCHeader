@interface IESIMCoreSDKInitManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

+ (id)sharedInstance;

- (void)imBasicCoreSDKInitWithDict:(id)a0 globalConfig:(id)a1;
- (void)imBasicConfigAndInitSDKWithUid:(id)a0;
- (void)p_imBasicCoreSDKInitWithDict:(id)a0 globalConfig:(id)a1;
- (void)p_imBasicConfigAndInitSDKWithUid:(id)a0;
- (void)p_imBasicDestroyCurrentSdkWithClearDb:(BOOL)a0;
- (void)imBasicDestroyCurrentSdkWithClearDb:(BOOL)a0;
- (id)init;
- (void)dealloc;

@end
