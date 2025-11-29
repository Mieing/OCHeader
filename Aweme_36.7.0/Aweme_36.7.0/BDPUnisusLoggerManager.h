@class NSString;

@interface BDPUnisusLoggerManager : NSObject <UnisusLoggerServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)logDebugWithTag:(id)a0 message:(id)a1;
- (void)logInfoWithTag:(id)a0 message:(id)a1;
- (void)logWarnWithTag:(id)a0 message:(id)a1;
- (void)logErrorWithTag:(id)a0 message:(id)a1;
- (void)logFatalWithTag:(id)a0 message:(id)a1;

@end
