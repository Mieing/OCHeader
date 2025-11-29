@class NSString, AWEPOISimpleUserInfo;

@interface AWENearbyPOITagRateModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *rateId;
@property (copy, nonatomic) NSString *rateContent;
@property (retain, nonatomic) AWEPOISimpleUserInfo *userInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
