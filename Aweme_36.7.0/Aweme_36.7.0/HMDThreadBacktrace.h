@class NSString, NSArray;

@interface HMDThreadBacktrace : NSObject

@property (nonatomic) unsigned long long threadIndex;
@property (nonatomic) unsigned long long threadID;
@property (nonatomic) float threadCpuUsage;
@property (nonatomic) BOOL crashed;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *stackFrames;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL isSymbol;
@property (nonatomic) int async_times;

+ (id)backtraceOfThread:(unsigned int)a0 symbolicate:(BOOL)a1 skippedDepth:(unsigned long long)a2 suspend:(BOOL)a3;
+ (id)initWithBacktrace:(void **)a0 frames:(int)a1 threadName:(id)a2 threadID:(unsigned int)a3 threadIndex:(unsigned int)a4 skippedDepth:(int)a5;
+ (id)backtraceOfMainThreadWithSymbolicate:(BOOL)a0 skippedDepth:(unsigned long long)a1 suspend:(BOOL)a2;
+ (id)backtraceWithPointerArray:(id)a0;
+ (id)backtraceOfThreadWithParameter:(id)a0;
+ (id)backtraceOfAllThreadsWithParameter:(id)a0;
+ (id)backtraceOfAllThreadsWithKeyThread:(unsigned int)a0 symbolicate:(BOOL)a1 skippedDepth:(unsigned long long)a2 suspend:(BOOL)a3 maxThreadCount:(unsigned long long)a4;
+ (id)createBacktraceListWithHelper:(struct hmd_opaque_backtrace_helper { unsigned char x0[160]; } *)a0 symbolicate:(BOOL)a1;
+ (id)createBacktraceList:(struct hmdbt_backtrace { struct hmdbt_frame *x0; unsigned long long x1; char *x2; unsigned long long x3; unsigned int x4; float x5; int x6; int x7; int x8; } *)a0 size:(long long)a1 keyThread:(unsigned int)a2 symbolicate:(BOOL)a3;
+ (unsigned long long)getImageHeaderAddressWithName:(id)a0;
+ (unsigned long long)getAppImageHeaderAddressWithName:(id)a0;
+ (id)initWithCallStackReturnAddresses:(id)a0 threadName:(id)a1 threadID:(unsigned int)a2 threadIndex:(unsigned int)a3 skippedDepth:(int)a4;
+ (id)symbolicateForAddress:(unsigned long long)a0;
+ (void)load;
+ (unsigned int)mainThread;
+ (unsigned int)currentThread;

- (void)symbolicate:(BOOL)a0;
- (unsigned long long)topAppAddress;
- (unsigned long long)bottomAppAddress;
- (void).cxx_destruct;
- (id)description;
- (id)jsonObject;
- (id)init;

@end
