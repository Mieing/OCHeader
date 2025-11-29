@class NSString;

@interface IESLLTempoTraceEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *threadName;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long threadID;

- (void).cxx_destruct;

@end
