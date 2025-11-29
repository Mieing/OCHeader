@interface DYPhoneNumberUnusableResponseModel : DYAPassportResponseModel

@property (nonatomic) BOOL isUnusable;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) BOOL MONSupport;

+ (id)JSONKeyPathsByPropertyKey;

@end
