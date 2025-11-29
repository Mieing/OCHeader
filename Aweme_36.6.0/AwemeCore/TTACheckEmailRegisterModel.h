@class NSString;

@interface TTACheckEmailRegisterModel : TTADataRespModel

@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *error_description;
@property (nonatomic) long long error_code;
@property (nonatomic) BOOL is_registered;

- (void).cxx_destruct;

@end
