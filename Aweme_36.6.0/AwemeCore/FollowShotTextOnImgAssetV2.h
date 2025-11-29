@class NSString, NSMutableArray;

@interface FollowShotTextOnImgAssetV2 : GPBMessage

@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL hasEffectId;
@property (copy, nonatomic) NSString *parentEffectId;
@property (nonatomic) BOOL hasParentEffectId;
@property (copy, nonatomic) NSString *textTemplateEffectId;
@property (nonatomic) BOOL hasTextTemplateEffectId;
@property (retain, nonatomic) NSMutableArray *fontEffectIdSArray;
@property (readonly, nonatomic) unsigned long long fontEffectIdSArray_Count;
@property (nonatomic) BOOL hasNewEffect_p;
@property (nonatomic) BOOL hasHasNewEffect_p;

+ (id)descriptor;

@end
