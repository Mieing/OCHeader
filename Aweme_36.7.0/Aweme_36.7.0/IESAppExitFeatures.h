@class IESAppExitFeatureInfo;

@interface IESAppExitFeatures : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) IESAppExitFeatureInfo *currentExitInfo;
@property (nonatomic) long long appLaunchTime;
@property (nonatomic) long long lastRestartTime;
@property (nonatomic) long long lastEnterBackgroundTime;
@property (nonatomic) BOOL hasEnterBackground;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (void)doLock;
- (void)doUnlock;
- (BOOL)config:(id)a0 containSubType:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
