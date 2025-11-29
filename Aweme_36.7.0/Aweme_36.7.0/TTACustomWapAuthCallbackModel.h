@class NSString, NSDictionary;

@interface TTACustomWapAuthCallbackModel : TTADataRespModel

@property (nonatomic) long long error_code;
@property (copy, nonatomic) NSString *error_description;
@property (copy, nonatomic) NSString *dialog_tips;
@property (copy, nonatomic) NSString *error_name;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *session_key;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *auth_token;
@property (nonatomic) BOOL new_platform;
@property (nonatomic) BOOL new_user;
@property (copy, nonatomic) NSDictionary *otherInfo;

- (void).cxx_destruct;

@end
