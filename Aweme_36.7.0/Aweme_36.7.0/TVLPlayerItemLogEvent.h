@class NSDictionary, NSDate;

@interface TVLPlayerItemLogEvent : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long duration;
@property (readonly, nonatomic, getter=isOngoing) BOOL ongoing;
@property (readonly, copy, nonatomic) NSDictionary *logInfo;

- (void).cxx_destruct;
- (void)start;
- (void)end;

@end
