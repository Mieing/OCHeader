@class NSString, WCAdDynamicFeedAnimationPropertyValueInfo;

@interface WCAdDynamicFeedAnimationPropertyInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) WCAdDynamicFeedAnimationPropertyValueInfo *fromValue;
@property (retain, nonatomic) WCAdDynamicFeedAnimationPropertyValueInfo *toValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0 forConfigTag:(id)a1;
- (BOOL)parsePropertyValuesWithBasicWidth:(int)a0 basicRootFontSize:(int)a1;
- (void).cxx_destruct;

@end
