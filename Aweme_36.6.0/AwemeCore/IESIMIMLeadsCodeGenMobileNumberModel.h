@class NSString;

@interface IESIMIMLeadsCodeGenMobileNumberModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *maskedMobileNumber;
@property (copy, nonatomic) NSString *encryptedMobileMumber;
@property (copy, nonatomic) NSString *originalMobileNumber;
@property (copy, nonatomic) NSString *encryptedPhone;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
