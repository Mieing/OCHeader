@class HMInstance;

@interface HMDANRTracker2 : HMDANRTracker

@property (retain, nonatomic) HMInstance *instance;

+ (id)sharedTracker;

- (BOOL)exceptionDataSource;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (void)didBlockWithInfo:(id)a0;
- (void).cxx_destruct;

@end
