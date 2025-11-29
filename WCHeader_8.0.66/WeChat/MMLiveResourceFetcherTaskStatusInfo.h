@class NSString, NSRecursiveLock;

@interface MMLiveResourceFetcherTaskStatusInfo : NSObject {
    struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } _status;
    struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } _faultEventId;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cacheMiss;
}

@property (nonatomic) struct { BOOL isPrimaryTask; NSString *spearheadTaskId; int cdnStatusCode; } fetchingMetadataStorage;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly) unsigned long long status;
@property (readonly) unsigned long long faultEventId;
@property (readonly) unsigned long long faultingFlowAction;
@property (readonly) BOOL cacheMiss;
@property (readonly) struct { BOOL x0; id x1; int x2; } fetchingMetadata;

- (id)init;
- (void)setStatus:(unsigned long long)a0;
- (void)setFaultEventId:(unsigned long long)a0;
- (void)setCacheMiss:(BOOL)a0;
- (void)acceptTask;
- (void)startFetchingWithSpearheadTaskId:(id)a0 asPrimaryTask:(BOOL)a1;
- (void)completeFetchingWithCdnStatusCode:(int)a0;
- (void)completeTask;
- (void)faultTaskWithEventId:(unsigned long long)a0;
- (void)cancelTask;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
