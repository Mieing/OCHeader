@class NSString, NSArray, NSValue;

@interface AWEStoryFontModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isFakeModel;
@property (nonatomic) BOOL isUseCache;
@property (copy, nonatomic) NSString *iconURLString;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double baselineOffset;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *fontFileName;
@property (copy, nonatomic) NSString *localUrl;
@property (copy, nonatomic) NSArray *coverURLs;
@property (nonatomic) BOOL hasBgColor;
@property (nonatomic) BOOL hasShadeColor;
@property (nonatomic) BOOL isDefaultStyle;
@property (copy, nonatomic) NSString *resourceId;
@property (nonatomic) long long defaultFontSize;
@property (copy, nonatomic) NSString *effectId;
@property (retain, nonatomic) NSValue *titleSize;
@property (retain, nonatomic) NSValue *collectionCellSize;
@property (nonatomic) unsigned long long textStyle;
@property (readonly, nonatomic) BOOL download;
@property (readonly, nonatomic) BOOL supportStroke;
@property (nonatomic) long long downloadState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFakeModel;
+ (BOOL)isValidEffectModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)acc_stickerResource;
- (id)initWithEffectModel:(id)a0;
- (id)acc_URS;
- (id)p_realLocalURLStringWithString:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
