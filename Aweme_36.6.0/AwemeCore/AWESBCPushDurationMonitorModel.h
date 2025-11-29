@class NSString;

@interface AWESBCPushDurationMonitorModel : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *event;

- (void)recordStart;
- (void)recordEnd;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;

@end
