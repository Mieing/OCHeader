@class NSArray, NSString;

@interface AWETextTemplateStickerModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double rotation;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) long long orderInLayer;
@property (copy, nonatomic) NSArray *position;
@property (copy, nonatomic) NSArray *scale;
@property (copy, nonatomic) NSString *filepath;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) struct CGSize { double width; double height; } normalizSize;
@property (copy, nonatomic) NSArray *textList;
@property (copy, nonatomic) NSArray *FallbackFontList;
@property (copy, nonatomic) NSArray *dependList;
@property (copy, nonatomic) NSString *templateId;
@property (nonatomic) BOOL revertSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textListJSONTransformer;
+ (id)dependListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getTemplateMainTitleIndexs;
- (id)initWithExtraPrama:(id)a0;
- (void)setupDependListWithParams:(id)a0;
- (id)getExtraPrama;
- (struct CGPoint { double x0; double x1; })positionToCGPoint;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
