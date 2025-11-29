@class NSString, NSArray;

@interface AWEIESMediaIDLCodeGenQueryUserRankingUserInfoResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *userInfosModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
