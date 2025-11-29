@class NSArray;

@interface AWEThirdPlatformLoginSetting : AWEBaseApiModel

@property (copy, nonatomic) NSArray *jumpModel;
@property (copy, nonatomic) NSArray *profileModel;
@property (copy, nonatomic) NSArray *otherModel;

+ (id)profileModelJSONTransformer;
+ (id)otherModelJSONTransformer;
+ (id)jumpModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
