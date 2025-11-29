@class WCAdDynamicFeedElementRollTextInfo, WCAdDynamicFeedElementPromotionInfo;

@interface WCAdDynamicFeedElementAbsoluteContainerInfo : NSObject <NSCoding>

@property (retain, nonatomic) WCAdDynamicFeedElementPromotionInfo *promotionInfo;
@property (retain, nonatomic) WCAdDynamicFeedElementRollTextInfo *rollTextInfo;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
