@interface AWESiriDonationMultiplierInfo : NSObject

@property (readonly, nonatomic) unsigned long long delaySendMode;
@property (readonly, nonatomic) double delayTime;
@property (readonly, nonatomic) long long coefficient;

- (id)initWithDelaySendMode:(unsigned long long)a0 delayTime:(double)a1 coefficient:(long long)a2;

@end
