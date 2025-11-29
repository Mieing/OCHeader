@class NSString, NSDictionary, NSLock;
@protocol HMDApplicationSessionUpdate;

@interface HMDApplicationSession : NSObject <HMDRecordStoreObject> {
    NSLock *_accessLock;
    struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { _Atomic double __a_value; } __a_; } _duration;
    struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { _Atomic double __a_value; } __a_; } _memoryUsage;
    struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { _Atomic double __a_value; } __a_; } _deviceMemoryUsage;
    struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { _Atomic double __a_value; } __a_; } _freeDisk;
    struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { _Atomic double __a_value; } __a_; } _freeMemory;
    struct atomic<unsigned long> { struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> { _Atomic unsigned long long __a_value; } __a_; } _localID;
}

@property (copy) NSString *eternalSessionID;
@property (retain, nonatomic) NSDictionary *customParams;
@property (retain, nonatomic) NSDictionary *filters;
@property (retain, nonatomic) NSDictionary *operationTrace;
@property (nonatomic) double duration;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double deviceMemoryUsage;
@property (nonatomic) double freeMemory;
@property (nonatomic) double freeDisk;
@property (weak, nonatomic) id<HMDApplicationSessionUpdate> delegate;
@property (copy) NSString *sessionID;
@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (nonatomic) double timeInSession;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *sdkVersion;
@property (retain, nonatomic) NSString *buildJobID;
@property (readonly, nonatomic, getter=isBackgroundStatus) BOOL backgroundStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bg_ignoreKeys;
+ (id)HMD_BGTool_overrideIvarTypeForIvarNameWithoutPrefixUnderscore:(id)a0;
+ (id)tableName;

- (double)freeDisk;
- (void)setFreeDisk:(double)a0;
- (void)setDuration:(double)a0 needWriteToDisk:(BOOL)a1;
- (void)__flushProperty:(id)a0;
- (double)deviceMemoryUsage;
- (void *)ivarAddressForAtomicDoubleType:(id)a0;
- (void)setMemoryUsage:(double)a0 needWriteToDisk:(BOOL)a1;
- (void)setDeviceMemoryUsage:(double)a0 needWriteToDisk:(BOOL)a1;
- (void)setFreeDisk:(double)a0 needWriteToDisk:(BOOL)a1;
- (void)setFreeMemory:(double)a0 needWriteToDisk:(BOOL)a1;
- (void)setCustomParams:(id)a0 needWriteToDisk:(BOOL)a1;
- (void)setFilters:(id)a0 needWriteToDisk:(BOOL)a1;
- (void)setOperationTrace:(id)a0 needWriteToDisk:(BOOL)a1;
- (void)setDeviceMemoryUsage:(double)a0;
- (double)freeMemory;
- (void)setFreeMemory:(double)a0;
- (void).cxx_destruct;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)dictionaryValue;
- (id)init;
- (double)duration;
- (void)setMemoryUsage:(double)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (double)memoryUsage;
- (void)setDuration:(double)a0;
- (unsigned long long)localID;
- (id)valueForKey:(id)a0;
- (void)updateProperties:(id)a0;
- (void)setLocalID:(unsigned long long)a0;

@end
