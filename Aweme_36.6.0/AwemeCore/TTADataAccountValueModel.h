@class NSArray, NSString;

@interface TTADataAccountValueModel : TTADataRespModel

@property (nonatomic) long long userType;
@property (nonatomic) long long authType;
@property (copy, nonatomic) NSArray *oauthPlatforms;
@property (copy, nonatomic) NSString *valueTicket;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
