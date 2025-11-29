@class NSString, NSDictionary;

@interface AWEPOIPostPermissionResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *defaultText;
@property (copy, nonatomic) NSDictionary *searchSpuTabInfo;
@property (nonatomic) long long userType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
