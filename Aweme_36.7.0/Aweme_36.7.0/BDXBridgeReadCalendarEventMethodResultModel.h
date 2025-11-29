@class NSNumber, NSString;

@interface BDXBridgeReadCalendarEventMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *startDate;
@property (retain, nonatomic) NSNumber *endDate;
@property (retain, nonatomic) NSNumber *alarmOffset;
@property (retain, nonatomic) NSNumber *allDay;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
