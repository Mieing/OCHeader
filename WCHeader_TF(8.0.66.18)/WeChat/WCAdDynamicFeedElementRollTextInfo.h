@class WCAdDynamicFeedElementValue, NSString;

@interface WCAdDynamicFeedElementRollTextInfo : NSObject <NSCoding>

@property (retain, nonatomic) WCAdDynamicFeedElementValue *backgroundColor;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *textColor;
@property (retain, nonatomic) NSString *iconUrl;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0 forConfigTag:(id)a1;
- (void).cxx_destruct;

@end
