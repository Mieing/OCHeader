@interface WCFDMonitor : NSObject {
    unsigned long long _types[2560];
    struct shared_ptr<WCFDMonitorThreadInfo> { struct WCFDMonitorThreadInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _threadInfos[2560];
}

+ (id)shareInstance;

- (id)init;
- (void)updateRlimit;
- (void)setup;
- (void)updateExpt;
- (void)recordInfo:(int)a0 type:(unsigned long long)a1 threadInfo:(struct shared_ptr<WCFDMonitorThreadInfo> { struct WCFDMonitorThreadInfo *x0; struct __shared_weak_count *x1; })a2;
- (void)clearInfo:(int)a0;
- (id)threadInfo:(int)a0;
- (void)reportTooManyOpenFiles;
- (void)printEMFILE:(const char *)a0;
- (id)shortenPath:(const char *)a0;
- (BOOL)isMMKVPath:(id)a0;
- (BOOL)isWCDBPath:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
