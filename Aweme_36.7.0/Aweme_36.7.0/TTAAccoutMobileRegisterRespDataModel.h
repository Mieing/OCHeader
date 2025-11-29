@class NSString;

@interface TTAAccoutMobileRegisterRespDataModel : TTADataRespModel

@property (copy, nonatomic) NSString *error_description;
@property (nonatomic) long long error_code;
@property (copy, nonatomic) NSString *ticket;

- (void).cxx_destruct;

@end
