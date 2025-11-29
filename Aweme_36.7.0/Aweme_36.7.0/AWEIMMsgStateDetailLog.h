@class NSString, IESIMDebounce, HMDThreadSafeArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMMsgStateDetailLog : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, copy, nonatomic) NSString *logFilePath;
@property (retain, nonatomic) IESIMDebounce *bebounce;
@property (retain, nonatomic) HMDThreadSafeArray *logList;
@property (retain, nonatomic) HMDThreadSafeArray *logBuffer;
@property (nonatomic) BOOL enableLogSwitch;

+ (BOOL)detailLog;
+ (void)logString:(id)a0 tag:(id)a1;
+ (void)updateLogEnable:(BOOL)a0;
+ (void)logLineForTag:(id)a0;
+ (id)sharedInstance;

- (void)p_bebounceExcute;
- (void)p_writeStringToFile:(id)a0 tag:(id)a1 date:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
