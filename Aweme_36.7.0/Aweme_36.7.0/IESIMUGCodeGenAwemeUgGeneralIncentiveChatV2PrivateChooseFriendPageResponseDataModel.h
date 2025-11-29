@class NSString, NSArray;

@interface IESIMUGCodeGenAwemeUgGeneralIncentiveChatV2PrivateChooseFriendPageResponseDataModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *prompts;
@property (copy, nonatomic) NSArray *friendInfoListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
