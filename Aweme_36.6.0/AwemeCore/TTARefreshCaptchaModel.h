@class NSString;

@interface TTARefreshCaptchaModel : TTADataRespModel

@property (copy, nonatomic) NSString *captcha;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
