@class NSString;

@interface ACCUpdateTextMaterialParam : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *color;
@property (nonatomic) long long fontSize;
@property (copy, nonatomic) NSString *fontKey;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) BOOL hasShadow;
@property (copy, nonatomic) NSString *shadowColor;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) long long shadowAngle;
@property (nonatomic) long long shadowDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
