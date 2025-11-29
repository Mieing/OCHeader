@class NSString;

@interface BTLNotifyBarReportItem : MMObject

@property (nonatomic) unsigned int exposeTimes;
@property (nonatomic) unsigned int exposeTimestamp;
@property (nonatomic) unsigned int msgType;
@property (copy, nonatomic) NSString *bizUserName;
@property (nonatomic) BOOL isClick;

- (void).cxx_destruct;

@end
