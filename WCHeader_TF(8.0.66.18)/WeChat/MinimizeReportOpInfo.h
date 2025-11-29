@class NSString;

@interface MinimizeReportOpInfo : NSObject

@property (nonatomic) unsigned long long opType;
@property (retain, nonatomic) NSString *miniSessionId;
@property (retain, nonatomic) NSString *aggreSessionId;
@property (nonatomic) unsigned long long taskIdleTime;
@property (nonatomic) unsigned long long aggreWindowExistTime;
@property (nonatomic) unsigned long long singleTaskExistTime;
@property (nonatomic) unsigned long long taskType;
@property (nonatomic) long long taskOrder;
@property (nonatomic) unsigned long long taskForegroundTime;
@property (nonatomic) unsigned long long taskFoldTime;

- (void).cxx_destruct;

@end
