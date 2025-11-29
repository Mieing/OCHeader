@class NSString, TTAUserModel;

@interface TTAAuthLoginAuthorizeRespDataModel : TTADataRespModel

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *user_id_str;
@property (retain, nonatomic) TTAUserModel *user_info;

- (void).cxx_destruct;

@end
