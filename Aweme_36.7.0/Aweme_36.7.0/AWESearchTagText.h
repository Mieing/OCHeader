@class NSArray, NSString, NSNumber;

@interface AWESearchTagText : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSArray *gradientColors;
@property (nonatomic) int showStyle;
@property (retain, nonatomic) NSNumber *marginTop;
@property (retain, nonatomic) NSNumber *marginBottom;
@property (retain, nonatomic) NSNumber *marginLeft;
@property (retain, nonatomic) NSNumber *marginRight;
@property (retain, nonatomic) NSNumber *radius;
@property (retain, nonatomic) NSNumber *fontSize;
@property (retain, nonatomic) NSNumber *alpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)segmentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
