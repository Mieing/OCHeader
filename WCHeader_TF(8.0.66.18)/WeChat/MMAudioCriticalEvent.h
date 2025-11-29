@class NSDictionary;

@interface MMAudioCriticalEvent : NSObject

@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSDictionary *eventInfo;

- (void).cxx_destruct;

@end
