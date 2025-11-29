@class NSDateFormatter;

@interface TTVideoEngineTimeCalibration : NSObject

@property (nonatomic) long long serverTimeToCali;
@property (nonatomic) long long localTimeToCali;
@property (nonatomic) BOOL isCalibrated;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;

- (long long)getServerTime;
- (id)getServerTimeStr:(id)a0;
- (void)updateServerTime:(long long)a0 localTime:(long long)a1;
- (void).cxx_destruct;

@end
