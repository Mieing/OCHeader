@class NSString;

@interface AWENoxusVideoPaymentInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *expireTimeString;
@property (nonatomic) unsigned long long payType;
@property (nonatomic) BOOL payStatus;
@property (nonatomic) long long expireTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
