@class NSString;

@interface AWECompanyAuditInfoResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *guideDescription;
@property (copy, nonatomic) NSString *tips;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
