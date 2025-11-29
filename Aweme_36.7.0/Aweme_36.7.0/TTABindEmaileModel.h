@class NSString;

@interface TTABindEmaileModel : TTADataRespModel

@property (copy, nonatomic) NSString *captcha;
@property (copy, nonatomic) NSString *error_description;
@property (nonatomic) long long error_code;
@property (copy, nonatomic) NSString *email;

- (void).cxx_destruct;

@end
