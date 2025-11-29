@class NSString;

@interface TTAValidateSMSCodeModel : TTADataRespModel

@property (copy, nonatomic) NSString *captcha;
@property (nonatomic) long long error_code;
@property (copy, nonatomic) NSString *error_description;
@property (copy, nonatomic) NSString *ticket;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
