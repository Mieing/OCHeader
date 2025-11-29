@class BDPThreadSafeArray, NSObject;
@protocol OS_dispatch_queue;

@interface BDPLog : NSObject

@property (retain, nonatomic) BDPThreadSafeArray *pendingModels;
@property (retain, nonatomic) BDPThreadSafeArray *listeners;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (copy, nonatomic) id /* block */ checkAppActive;
@property (nonatomic) BOOL logOnAloneQueue;
@property (nonatomic) BOOL delayExecute;
@property (nonatomic) unsigned long long maxLength;

+ (void)setCheckAppActive:(id /* block */)a0;
+ (id)sharedInstance;

- (BOOL)hasAppInTheForeground;
- (void)logWithLevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 funcName:(const char *)a3 line:(int)a4 content:(id)a5;
- (void)logWithLevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 funcName:(const char *)a3 line:(int)a4 shortContent:(id)a5 content:(id)a6;
- (void)disposeLogWithLevel:(unsigned long long)a0 tag:(id)a1 fileName:(const char *)a2 funcName:(const char *)a3 line:(int)a4 content:(id)a5;
- (BOOL)shouldChangeQueue;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addListener:(id)a0;

@end
