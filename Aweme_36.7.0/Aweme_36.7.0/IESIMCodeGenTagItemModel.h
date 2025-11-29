@class IESIMCodeGenUserTagLevelModel, NSString, NSArray, IESIMCodeGenTagBannerModel, IESIMCodeGenTagImageModel, IESIMCodeGenTagDisplayStyleModel;

@interface IESIMCodeGenTagItemModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *tagKey;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long expire;
@property (copy, nonatomic) NSArray *levelsModelArray;
@property (retain, nonatomic) IESIMCodeGenTagBannerModel *bannerModel;
@property (retain, nonatomic) IESIMCodeGenTagImageModel *backgroundImageModel;
@property (retain, nonatomic) IESIMCodeGenTagDisplayStyleModel *extraTagModel;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSArray *levelRuleIntroductionModelArray;
@property (retain, nonatomic) IESIMCodeGenUserTagLevelModel *defaultLevelModel;
@property (nonatomic) long long authType;
@property (nonatomic) long long authStatus;
@property (copy, nonatomic) NSString *tagCategory;
@property (nonatomic) long long customizedType;
@property (copy, nonatomic) NSString *customizedId;
@property (copy, nonatomic) NSString *prefix;
@property (nonatomic) long long templateId;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
