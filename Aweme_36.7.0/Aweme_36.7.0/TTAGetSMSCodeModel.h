@class NSNumber, NSString;

@interface TTAGetSMSCodeModel : TTADataRespModel

@property (retain, nonatomic) NSNumber *retry_time;
@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *captcha;
@property (nonatomic) long long error_code;
@property (copy, nonatomic) NSString *error_description;
@property (copy, nonatomic) NSString *dialog_tips;
@property (copy, nonatomic) NSString *sec_info;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
