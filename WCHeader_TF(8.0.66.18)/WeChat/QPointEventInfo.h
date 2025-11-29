@class NSString;

@interface QPointEventInfo : QPoiInfo

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *road;
@property (copy, nonatomic) NSString *detail;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double updateTime;

- (id)description;
- (void).cxx_destruct;

@end
