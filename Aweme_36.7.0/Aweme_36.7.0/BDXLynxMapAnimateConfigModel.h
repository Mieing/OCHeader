@class NSString;

@interface BDXLynxMapAnimateConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double from;
@property (nonatomic) double to;
@property (nonatomic) double fromTranslateX;
@property (nonatomic) double fromTranslateY;
@property (nonatomic) double fromTranslateZ;
@property (nonatomic) double toTranslateX;
@property (nonatomic) double toTranslateY;
@property (nonatomic) double toTranslateZ;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) long long repeatCount;
@property (nonatomic) unsigned long long repeatMode;
@property (nonatomic) unsigned long long interpolator;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bezierParams;
@property (nonatomic) BOOL enableOvershoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bezierParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;

@end
