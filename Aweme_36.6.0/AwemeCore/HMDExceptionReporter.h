@class NSLock, NSMutableDictionary;

@interface HMDExceptionReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *reporterMap;
@property (retain, nonatomic) NSLock *reporterMapLock;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (void)reportExceptionDataWithExceptionTypes:(id)a0;
- (id)allDebugRealExceptionDataWithConfig:(id)a0;
- (void)cleanupExceptionDataWithConfig:(id)a0;
- (void)reportDebugRealExceptionData:(id)a0 exceptionTypes:(id)a1;
- (void)removeReportModule:(id)a0;
- (void)addReportModule:(id)a0;
- (void)reportAllExceptionData;
- (id)reporterWithExceptionType:(unsigned long long)a0 createIfNeed:(BOOL)a1;
- (id)reporterWithExceptionType:(unsigned long long)a0;
- (id)reporterWithModule:(id)a0 createIfNeed:(BOOL)a1;
- (id)allReporters;
- (id)reporterWithModule:(id)a0;
- (void)enumerateAllReportersUsingBlock:(id /* block */)a0;
- (id)debugRealExceptionDataWithConfig:(id)a0 exceptionTypes:(id)a1;
- (void)reportAllDebugRealExceptionData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
