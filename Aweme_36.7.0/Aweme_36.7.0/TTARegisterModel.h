@class NSString;

@interface TTARegisterModel : TTADataRespModel

@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *error_description;
@property (nonatomic) long long error_code;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
