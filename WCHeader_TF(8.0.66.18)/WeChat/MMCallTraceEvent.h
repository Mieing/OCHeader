@class NSString;

@interface MMCallTraceEvent : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long time;
@property (nonatomic) int depth;
@property (nonatomic) int processID;
@property (nonatomic) int threadID;

- (void).cxx_destruct;

@end
