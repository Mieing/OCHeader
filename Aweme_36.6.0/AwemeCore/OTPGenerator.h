@class NSString, NSData;

@interface OTPGenerator : NSObject

@property (copy, nonatomic) NSString *algorithm;
@property (copy, nonatomic) NSData *secret;
@property (readonly, nonatomic) unsigned long long digits;

+ (unsigned long long)defaultDigits;
+ (id)defaultAlgorithm;

- (id)initWithSecret:(id)a0 algorithm:(id)a1 digits:(unsigned long long)a2;
- (id)generateOTP;
- (id)generateOTPForCounter:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
