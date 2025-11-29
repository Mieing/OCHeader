@class NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AWETokamakThreadMonitorPlatform : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned long long uploadOption;
@property (nonatomic) unsigned long long delayTimeRange;
@property (nonatomic) unsigned long long threadLimit;
@property (nonatomic) unsigned long long uploadLimit;
@property (nonatomic) BOOL enableNumberUpload;
@property (nonatomic) BOOL enableSenceCapture;
@property (retain, nonatomic) NSArray *combineList;
@property (retain, nonatomic) NSArray *specifyThreadLimitName;
@property (retain, nonatomic) NSArray *specifyThreadLimitValue;

+ (id)shareInstance;

- (void)onViewControllerChanged;
- (void)initConfig:(id)a0;
- (void)checkThreadStatus;
- (void)checkThreadStatusANRWeak;
- (void)checkThreadStatusANR;
- (void)checkThreadStatusMemory;
- (void)checkThreadStatusForReason:(unsigned long long)a0;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })dealThreadName:(id)a0;
- (void)uploadToTea:(id)a0 threadCountMap:(struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { void *x0; struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x1; unsigned long long x2; } x0; })a1;
- (void)writeThreadInfo:(id)a0 threadName:(id)a1 threadNumber:(unsigned long long)a2 reason:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)start;

@end
