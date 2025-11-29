@class NSString;

@interface AWEACCLogImpl : NSObject <ACCLogProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)toolLogWithTag:(id)a0 filename:(id)a1 line:(long long)a2 funcName:(id)a3 level:(long long)a4 message:(id)a5;
- (id)createLogTagWithTag:(unsigned long long)a0 subtag:(id)a1;
- (void)appendLogData:(id)a0;
- (void)toolVerboseLogWithInfo:(struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })a0 message:(id)a1;
- (void)toolInfoLogWithInfo:(struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })a0 message:(id)a1;
- (void)toolDebugLogWithInfo:(struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })a0 message:(id)a1;
- (void)toolWarnLogWithInfo:(struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })a0 message:(id)a1;
- (void)toolErrorLogWithInfo:(struct ACCLoggerInfo_t { char *x0; char *x1; int x2; char *x3; })a0 message:(id)a1;
- (void)uploadALogBeforeNow:(double)a0 retryTimes:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)willAppendLogWithMainTag:(unsigned long long)a0 subTag:(id)a1 level:(long long)a2 log:(id)a3;
- (void)uploadALog;

@end
