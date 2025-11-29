@class NSString, NSMutableDictionary, NSArray, NSObject;
@protocol HMDWatchdogProtectDetectProtocol, OS_dispatch_queue;

@interface HMDWatchdogProtectManager : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { _Atomic double __a_value; } __a_; } _timeoutInterval;
    struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { _Atomic double __a_value; } __a_; } _launchThreshold;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _UIPasteboardProtect;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _UIApplicationProtect;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _YYCacheProtect;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _NSUserDefaultProtect;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
    NSArray *_mainThreadProtectionCollection;
    NSArray *_anyThreadProtectCollection;
}

@property (retain, nonatomic) NSMutableDictionary *localTypeList;
@property (weak) id<HMDWatchdogProtectDetectProtocol> delegate;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double launchThreshold;
@property (nonatomic) BOOL UIPasteboardProtect;
@property (nonatomic) BOOL UIApplicationProtect;
@property (nonatomic) BOOL YYCacheProtect;
@property (nonatomic) BOOL NSUserDefaultProtect;
@property (readonly, nonatomic) NSString *currentProtectedMethodDescription;

+ (id)sharedInstance;

- (void)processCapture:(id)a0 type:(unsigned long long)a1;
- (void)trackProtectedMethods;
- (void)turnOnYYCacheProtectIgnoreCloudSetting:(BOOL)a0;
- (void)turnOnYYCacheProtectIgnorCloudSetting:(BOOL)a0;
- (void)setDynamicProtectOnMainThread:(id)a0 onAnyThread:(id)a1;
- (id)getLocalTypes;
- (void).cxx_destruct;
- (id)init;
- (id)typeString:(unsigned long long)a0;

@end
