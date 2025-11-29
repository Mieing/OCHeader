@class WCAdDynamicFeedElementValue;

@interface WCAdDynamicFeedElementPromotionInfo : NSObject <NSCoding>

@property (retain, nonatomic) WCAdDynamicFeedElementValue *backgroundColor;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *leftTextColor;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *rightTextColor;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *rightNumberColor;
@property (retain, nonatomic) WCAdDynamicFeedElementValue *rightNumberBackgroundColor;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0 forConfigTag:(id)a1;
- (void).cxx_destruct;

@end
