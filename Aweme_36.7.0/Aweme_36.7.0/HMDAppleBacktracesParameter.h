@class NSString;

@interface HMDAppleBacktracesParameter : HMDThreadBacktraceParameter

@property (nonatomic) BOOL needAllThreads;
@property (nonatomic) unsigned long long logType;
@property (retain, nonatomic) NSString *exception;
@property (retain, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (id)init;

@end
