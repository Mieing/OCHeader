@class AWEIMSecurityGlobalToastFloaterManager, AWEIMSecurityGlobalToastStore;

@interface AWEIMSecurityGlobalToastManager : NSObject

@property (nonatomic) BOOL enableProcessData;
@property (retain, nonatomic) AWEIMSecurityGlobalToastStore *store;
@property (nonatomic) double lastShowTimestamp;
@property (retain, nonatomic) AWEIMSecurityGlobalToastFloaterManager *floaterManager;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)tryShowFloatSafetyTipsViewOnView:(id)a0 viewController:(id)a1 onAddTipsView:(id /* block */)a2 floatViewOnDismiss:(id /* block */)a3;
- (void)registerByteSync;
- (void)reportSecurityGlobalToastPama:(id)a0 toastStatus:(unsigned long long)a1 content:(id)a2;
- (void)requestGlobalToastDetail;
- (void)__handleMessage:(id)a0;
- (BOOL)__checkGlobalToatFrequencyValid;
- (void)tryShowGlobalToast:(id)a0 dialog:(id)a1;
- (BOOL)__isValideScene;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
