@class UIColor, NSString;

@interface BDXLynxMapContentStyleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isBold;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) double contentOffset;
@property (nonatomic) unsigned long long contentAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundColorJSONTransformer;
+ (id)foregroundColorJSONTransformer;
+ (id)shadowColorJSONTransformer;
+ (id)maxSizeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
