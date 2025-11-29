@class AWECoverTextShadow, NSString, NSArray, UIFont;

@interface AWECoverTextConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double paddingTop;
@property (nonatomic) double paddingStart;
@property (nonatomic) double paddingBottom;
@property (nonatomic) double paddingEnd;
@property (nonatomic) long long layerWeight;
@property (nonatomic) double marginStart;
@property (nonatomic) double marginEnd;
@property (nonatomic) double marginTop;
@property (nonatomic) double marginBottom;
@property (copy, nonatomic) NSString *fontID;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long fontStyle;
@property (nonatomic) unsigned long long gradientType;
@property (nonatomic) unsigned long long gradientOrientation;
@property (copy, nonatomic) NSString *colorStart;
@property (copy, nonatomic) NSString *colorEnd;
@property (nonatomic) unsigned long long drawMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) unsigned long long textAlignment;
@property (nonatomic) double lineSpaceMult;
@property (nonatomic) double lineSpaceAdd;
@property (nonatomic) double letterSpaceMult;
@property (copy, nonatomic) NSString *placeHolderString;
@property (copy, nonatomic) NSString *placeHolderTextColor;
@property (copy, nonatomic) NSString *inputCursorColor;
@property (retain, nonatomic) NSArray *strokeConfigs;
@property (retain, nonatomic) NSArray *coverConfigs;
@property (retain, nonatomic) NSArray *backgroundCofigs;
@property (retain, nonatomic) AWECoverTextShadow *shadowConfig;
@property (nonatomic) double minWidth;
@property (nonatomic) double minHeight;
@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strokeConfigsJSONTransformer;
+ (id)coverConfigsJSONTransformer;
+ (id)backgroundCofigsJSONTransformer;
+ (id)shadowConfigJSONTransformer;
+ (id)generateFontFromEffectModelPath:(id)a0 fontSize:(double)a1 style:(unsigned long long)a2;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
