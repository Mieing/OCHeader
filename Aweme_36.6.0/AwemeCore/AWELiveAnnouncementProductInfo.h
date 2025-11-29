@class NSString;

@interface AWELiveAnnouncementProductInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *priceText;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *pricePrefix;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
