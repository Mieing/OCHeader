@class NSError;

@interface AWESkyLightMonitorMessage : NSObject

@property (nonatomic) long long action;
@property (retain, nonatomic) NSError *queryError;
@property (nonatomic) double queryStartTime;
@property (nonatomic) double queryEndTime;
@property (nonatomic) double renderEndTime;

- (void).cxx_destruct;

@end
