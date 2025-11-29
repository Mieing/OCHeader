@class NSString, NSArray;

@interface AWECodeGenFollowShotCaptionAssetModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *parentEffectId;
@property (copy, nonatomic) NSString *textTemplateEffectId;
@property (copy, nonatomic) NSArray *canvasSizeArray;
@property (nonatomic) BOOL hasNewEffect;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
