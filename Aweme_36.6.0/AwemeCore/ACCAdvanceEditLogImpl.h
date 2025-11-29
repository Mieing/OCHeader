@class NSString;

@interface ACCAdvanceEditLogImpl : NSObject <DVELoggerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logType:(long long)a0 tag:(id)a1 file:(const char *)a2 function:(const char *)a3 line:(int)a4 message:(id)a5;
- (struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })p_createLoggerInfoWithFilename:(const char *)a0 tag:(const char *)a1 line:(int)a2 functionName:(const char *)a3;

@end
