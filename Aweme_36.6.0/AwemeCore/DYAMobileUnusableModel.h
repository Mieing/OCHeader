@class NSString, NSDictionary;

@interface DYAMobileUnusableModel : DYAPassportResponseModel

@property (nonatomic) BOOL mobileUnusable;
@property (copy, nonatomic) NSString *unusableMobileDesc;
@property (nonatomic) long long mobileStatus;
@property (copy, nonatomic) NSDictionary *mobileStatusDescList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
