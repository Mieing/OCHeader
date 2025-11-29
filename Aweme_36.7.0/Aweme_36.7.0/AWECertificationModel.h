@class NSNumber;

@interface AWECertificationModel : AWEBaseApiModel

@property (nonatomic) long long bracket;
@property (nonatomic) BOOL needGuardianVerify;
@property (retain, nonatomic) NSNumber *verifyts;
@property (nonatomic) BOOL isVerified;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
