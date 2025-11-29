@class NSArray, NSString, NSDictionary;

@interface APCDTOEffectExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasLocalCustomizedProp;
@property (copy, nonatomic) NSArray *effects;
@property (nonatomic) BOOL isUserSwappedCamera;
@property (copy, nonatomic) NSArray *bindEffects;
@property (copy, nonatomic) NSString *fromTemplateId;
@property (copy, nonatomic) NSString *fromCustomizedId;
@property (copy, nonatomic) NSArray *stickerIDArray;
@property (copy, nonatomic) NSString *gradeKey;
@property (nonatomic) BOOL shouldStopLoadWhenfetchMusicError;
@property (copy, nonatomic) NSString *propSelectFrom;
@property (copy, nonatomic) NSString *searchPropID;
@property (nonatomic) BOOL isImageTemplateSticker;
@property (copy, nonatomic) NSString *effectSocialData;
@property (copy, nonatomic) NSString *subEffectId;
@property (copy, nonatomic) NSString *textOnImgAssetString;
@property (retain, nonatomic) NSArray *followShootAssets;
@property (nonatomic) BOOL isTextOnImageEffect;
@property (nonatomic) BOOL isCaptionFollowShot;
@property (nonatomic) long long propCardPosition;
@property (copy, nonatomic) NSDictionary *propCardExtraTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
