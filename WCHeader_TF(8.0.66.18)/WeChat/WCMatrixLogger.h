@class NSString;

@interface WCMatrixLogger : MMRootService <MMServiceProtocol>

@property (nonatomic) unsigned long long loggerPtr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)setupLogger;
- (void)logToFile:(const char *)a0;

@end
