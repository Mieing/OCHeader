@class NSString, NSArray;

@interface AWECodeGenFollowShootTextOnImgAssetModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *parentEffectId;
@property (copy, nonatomic) NSString *textTemplateEffectId;
@property (copy, nonatomic) NSArray *fontEffectIdSArray;
@property (nonatomic) BOOL hasNewEffect;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
