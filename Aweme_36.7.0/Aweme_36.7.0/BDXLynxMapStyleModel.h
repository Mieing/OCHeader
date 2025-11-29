@class UIColor, NSString;

@interface BDXLynxMapStyleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) float alpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fillColorJSONTransformer;
+ (id)strokeColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
