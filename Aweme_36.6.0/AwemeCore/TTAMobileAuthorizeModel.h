@class NSString, NSDictionary;

@interface TTAMobileAuthorizeModel : TTADataRespModel

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDictionary *user_info;

- (void).cxx_destruct;

@end
