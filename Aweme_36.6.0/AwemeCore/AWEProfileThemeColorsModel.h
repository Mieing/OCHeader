@class NSArray, NSString;

@interface AWEProfileThemeColorsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *lights;
@property (copy, nonatomic) NSArray *darks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)darkColorD;
- (id)lightColorD;
- (id)lightColorB;
- (id)darkColorB;
- (id)lightColorC;
- (id)darkColorC;
- (id)__getColorByColorList:(id)a0 index:(unsigned long long)a1;
- (void).cxx_destruct;

@end
