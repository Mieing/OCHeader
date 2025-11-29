@class WCAdMultiProductsInfo, NSString, WCAdRatingCardInfo, WCAdPromotionInfo, WCAdSellingPointInfo, WCAdCardBtnInfo;

@interface WCAdCardInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) WCAdRatingCardInfo *adRatingCardInfo;
@property (retain, nonatomic) WCAdCardBtnInfo *adCardBtnInfo;
@property (retain, nonatomic) WCAdPromotionInfo *adPromotionInfo;
@property (retain, nonatomic) WCAdSellingPointInfo *adSellingPointInfo;
@property (retain, nonatomic) WCAdMultiProductsInfo *adMultiProductsInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
