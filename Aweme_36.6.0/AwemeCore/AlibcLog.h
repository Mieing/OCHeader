@class NSString, NSDateFormatter, NSObject;
@protocol OS_dispatch_queue;

@interface AlibcLog : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_logFilePath;
    NSDateFormatter *_dateFormar;
    BOOL _bEnable;
}

+ (id)GetInstance;

- (void)writeLogInfo:(id)a0 logLever:(id)a1;
- (id)getTimeStr;
- (void)logErrorMsg:(const char *)a0 funcName:(const char *)a1 line:(int)a2 msg:(id)a3;
- (void)showAssertAlert:(const char *)a0 funcName:(const char *)a1 line:(int)a2 msg:(id)a3;
- (void)logDebugMsg:(const char *)a0 funcName:(const char *)a1 line:(int)a2 msg:(id)a3;
- (void)logInfoMsg:(const char *)a0 funcName:(const char *)a1 line:(int)a2 msg:(id)a3;
- (void)logWarnMsg:(const char *)a0 funcName:(const char *)a1 line:(int)a2 msg:(id)a3;
- (void)writeLogStrToFile:(id)a0;
- (void)setDebugLogOpen:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)getLogFilePath;
- (id)getFileHandle;

@end
