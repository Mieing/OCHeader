@class ACCMaterialInfo, NSString, ACCTimerange, NSArray, ACCTransformInfo;

@interface ACCTextMiniDraftConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long type;
@property (retain, nonatomic) ACCTimerange *timerange;
@property (copy, nonatomic) NSString *fontKey;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) long long fontSize;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) double scale;
@property (nonatomic) long long typeSetting;
@property (retain, nonatomic) ACCTransformInfo *transform;
@property (retain, nonatomic) ACCMaterialInfo *materialInfo;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) BOOL hasShadow;
@property (copy, nonatomic) NSString *shadowColor;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) long long shadowAngle;
@property (nonatomic) long long shadowDistance;
@property (retain, nonatomic) NSArray *textAnimations;
@property (retain, nonatomic) NSArray *triggerWords;
@property (retain, nonatomic) NSArray *batchModifySelectTextParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)materialInfoJSONTransformer;
+ (id)timerangeJSONTransformer;
+ (id)transformJSONTransformer;
+ (id)textAnimationsJSONTransformer;
+ (id)triggerWordsJSONTransformer;
+ (id)batchModifySelectTextParamJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
