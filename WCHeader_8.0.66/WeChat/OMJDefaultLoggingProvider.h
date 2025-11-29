@class NSString;

@interface OMJDefaultLoggingProvider : NSObject <OMJLoggingProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logInfoWithTag:(id)a0 filename:(id)a1 lineNum:(long long)a2 functionName:(id)a3 message:(id)a4;
- (void)logDebugWithTag:(id)a0 filename:(id)a1 lineNum:(long long)a2 functionName:(id)a3 message:(id)a4;
- (void)logWarnWithTag:(id)a0 filename:(id)a1 lineNum:(long long)a2 functionName:(id)a3 message:(id)a4;
- (void)logErrorWithTag:(id)a0 filename:(id)a1 lineNum:(long long)a2 functionName:(id)a3 message:(id)a4;
- (void)logFatalWithTag:(id)a0 filename:(id)a1 lineNum:(long long)a2 functionName:(id)a3 message:(id)a4;

@end
