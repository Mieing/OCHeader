@class NSString;

@interface TTASNSSDKAuthCallbackModel : TTAUserModel

@property (copy, nonatomic) NSString *auth_token;
@property (copy, nonatomic) NSString *dialog_tips;
@property (copy, nonatomic) NSString *sec_info;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
