@class NSString;

@interface IESLLPOIGoodsDetailShareCouponBubbleFrequency : NSObject

@property (copy, nonatomic) NSString *storageKey;

- (id)initWithProductId:(id)a0;
- (void)recordFrequency;
- (BOOL)hitFrequency;
- (void).cxx_destruct;
- (id)currentDate;

@end
