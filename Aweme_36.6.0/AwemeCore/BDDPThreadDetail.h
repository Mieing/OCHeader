@class NSString;

@interface BDDPThreadDetail : NSObject

@property (nonatomic) BOOL isMain;
@property (nonatomic) long long nvcsw;
@property (nonatomic) long long nivcsw;
@property (nonatomic) long long nvcswDiff;
@property (nonatomic) long long nivcswDiff;
@property (nonatomic) int count;
@property (nonatomic) int foreground;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSString *scene;
@property (nonatomic) long long bootTimeMs;
@property (nonatomic) int policy;
@property (nonatomic) int nice;
@property (nonatomic) long long threadAliveTime;
@property (nonatomic) long long cpuTime;
@property (nonatomic) long long cpuTimeDiff;
@property (nonatomic) long long intervalTime;
@property (nonatomic) long long procCpuTime;
@property (nonatomic) long long procCpuTimeDiff;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSString *threadName;
@property (retain, nonatomic) NSString *states;
@property (retain, nonatomic) NSString *signal;

- (void).cxx_destruct;
- (id)dictionary;
- (id)init;

@end
