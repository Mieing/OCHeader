@class NSString, GACAppCheckBackoffOperationFailure;

@interface GACAppCheckBackoffWrapper : NSObject <GACAppCheckBackoffWrapperProtocol>

@property (readonly, nonatomic) id /* block */ dateProvider;
@property (retain, nonatomic) GACAppCheckBackoffOperationFailure *lastFailure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)currentDateProvider;

- (id /* block */)defaultAppCheckProviderErrorHandler;
- (id)applyBackoffToOperation:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (BOOL)isNextOperationAllowed;
- (id)promiseWithRetryDisallowedError:(id)a0;
- (BOOL)hasTimeIntervalPassedSinceLastFailure:(double)a0;
- (double)exponentialBackoffIntervalForFailure:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDateProvider:(id /* block */)a0;
- (id)queue;

@end
