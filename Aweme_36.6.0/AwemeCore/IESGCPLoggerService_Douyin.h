@class NSString;

@interface IESGCPLoggerService_Douyin : NSObject <IESGCPLoggerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)mapBDALogLevelWithLogLevel:(unsigned long long)a0;
- (void)logWithLevel:(unsigned long long)a0 tag:(id)a1 filename:(const char *)a2 functionName:(const char *)a3 lineNumber:(int)a4 logString:(id)a5;

@end
