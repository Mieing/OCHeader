@class NSString;

@interface AWELiteAddCalendarEventV2Model : BDXBridgeModel

@property (copy, nonatomic) NSString *remindTitle;
@property (nonatomic) double remindStartTime;
@property (nonatomic) double durationMinutes;
@property (nonatomic) double remindAlarmTime;
@property (nonatomic) double remindCount;
@property (nonatomic) double remindEndTime;
@property (copy, nonatomic) NSString *remindTag;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
