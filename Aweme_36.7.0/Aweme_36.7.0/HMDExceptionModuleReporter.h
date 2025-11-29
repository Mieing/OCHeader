@class NSCondition, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDExceptionModuleReporter : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;
}

@property (retain, nonatomic) NSMutableSet *exceptionModules;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *exceptionReportQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *exceptionResponseQueue;
@property (retain, nonatomic) NSCondition *condtion;
@property (nonatomic, getter=isReporting) BOOL reporting;
@property (nonatomic) BOOL needEncrypt;
@property (nonatomic) unsigned long long reporterType;

+ (id)reporterWithExceptionType:(unsigned long long)a0;

- (void)cleanupExceptionDataWithConfig:(id)a0;
- (void)removeReportModule:(id)a0;
- (void)addReportModule:(id)a0;
- (void)_reportExceptionData;
- (id)_allExceptionData;
- (void)_uploadWithDataWrapper:(id)a0 completion:(id /* block */)a1;
- (id)_debugRealExceptionDataWrappersWithConfig:(id)a0;
- (void)_reportDebugRealExceptionData:(id)a0;
- (void)uploadDataWithDataDicts:(id)a0 appID:(id)a1 urlProvider:(id)a2 completion:(id /* block */)a3;
- (void)_uploadDataWithDataDicts:(id)a0 appID:(id)a1 headerInfo:(id)a2 urlProvider:(id)a3 completion:(id /* block */)a4;
- (void)reportExceptionData;
- (id)debugRealExceptionDataWithConfig:(id)a0;
- (void)reportDebugRealExceptionData:(id)a0;
- (id)moduleURLProvier;
- (void).cxx_destruct;
- (id)init;

@end
