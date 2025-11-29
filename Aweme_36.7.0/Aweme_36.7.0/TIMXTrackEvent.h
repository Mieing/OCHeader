@class NSString, NSMutableDictionary;

@interface TIMXTrackEvent : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

- (long long)timeWithKey:(id)a0;
- (void)logBeginTime;
- (void)logEndTime;
- (long long)addCountWithKey:(id)a0 count:(long long)a1;
- (long long)countWithKey:(id)a0;
- (void)logCurrentTimeWithKey:(id)a0;
- (long long)timeIntervalWithBeginKey:(id)a0 endKey:(id)a1;
- (void).cxx_destruct;
- (long long)endTime;
- (long long)beginTime;
- (long long)timeInterval;
- (id)init;

@end
