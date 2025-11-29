@class NSArray, NSString;

@interface AWEIMCodeGenEffectGameModel : AWEBaseDataModel

@property (nonatomic) int friendCount;
@property (copy, nonatomic) NSArray *friendInfoModelArray;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) int effectType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *imSocialEffect;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
