@interface CSJAPIThrottling : NSObject

@property (nonatomic) double beginTime;
@property (nonatomic) double lastRequest;
@property (nonatomic) long long times;
@property (nonatomic) BOOL isThrottling;
@property (nonatomic) BOOL report;
@property (nonatomic) long long maxTimes;
@property (nonatomic) double timeDuration;
@property (nonatomic) BOOL enable;

- (BOOL)canMakeRequest;
- (void)reportAPIStat:(id)a0;

@end
