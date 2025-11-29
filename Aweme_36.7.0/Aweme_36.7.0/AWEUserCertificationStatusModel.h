@class NSString;

@interface AWEUserCertificationStatusModel : AWEBaseApiModel

@property (nonatomic) BOOL isVerified;
@property (nonatomic) long long certificationStep;
@property (nonatomic) long long reviewStatus;
@property (copy, nonatomic) NSString *resultPageUniformUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
