@interface TOTPGenerator : OTPGenerator

@property (nonatomic) double period;

+ (double)defaultPeriod;

- (id)generateOTPForDate:(id)a0;
- (id)initWithSecret:(id)a0 algorithm:(id)a1 digits:(unsigned long long)a2 period:(double)a3;
- (id)generateOTP;

@end
