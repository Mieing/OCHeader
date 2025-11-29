@interface AWEIMMessageUnavailableInfo : NSObject

@property (nonatomic) BOOL unavailable;
@property (nonatomic) double timestamp;
@property (nonatomic) long long reason;

+ (id)unavailableInfoWithUnavailable:(BOOL)a0;
+ (id)unavailableInfoWithUnavailable:(BOOL)a0 timestamp:(double)a1;
+ (id)unavailableInfoWithUnavailable:(BOOL)a0 timestamp:(double)a1 reason:(long long)a2;

@end
