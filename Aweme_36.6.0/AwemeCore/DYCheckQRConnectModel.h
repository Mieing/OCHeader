@class NSString, NSDictionary;

@interface DYCheckQRConnectModel : DYAPassportResponseModel

@property (copy, nonatomic) NSString *descUrl;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *redirectUrl;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSDictionary *userData;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)connectState;
- (void).cxx_destruct;

@end
