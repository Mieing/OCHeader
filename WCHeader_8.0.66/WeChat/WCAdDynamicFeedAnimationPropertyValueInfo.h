@class WCAdDynamicFeedElementValue, UIColor;

@interface WCAdDynamicFeedAnimationPropertyValueInfo : NSObject <NSCoding>

@property (retain, nonatomic) WCAdDynamicFeedElementValue *color;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *colorDark;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *numValue;
@property (retain, nonatomic) UIColor *colorExt;
@property (nonatomic) BOOL isValid;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (BOOL)shouldValueParseAsColorWithName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0 forConfigTag:(id)a1;
- (BOOL)parsePropertyValuesWithBasicWidth:(int)a0 basicRootFontSize:(int)a1;
- (void).cxx_destruct;

@end
