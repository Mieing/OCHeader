@class NSString, NSMutableArray, FinderJumpInfo;

@interface FinderPoiGroupBuyResponse_PoiGroupBuyCoupon : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *couponType;
@property (retain, nonatomic) NSString *couponName;
@property (retain, nonatomic) NSMutableArray *couponTagList;
@property (retain, nonatomic) NSString *discountPrice;
@property (retain, nonatomic) NSString *originalPrice;
@property (retain, nonatomic) NSString *discount;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) FinderJumpInfo *buttonJumpInfo;

+ (void)initialize;

- (void)setButtonJumpInfo:(id)a0;
- (id)buttonJumpInfo;
- (void)setButtonTitle:(id)a0;
- (id)buttonTitle;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setImgUrl:(id)a0;
- (id)imgUrl;
- (void)setDiscount:(id)a0;
- (id)discount;
- (void)setOriginalPrice:(id)a0;
- (id)originalPrice;
- (void)setDiscountPrice:(id)a0;
- (id)discountPrice;
- (void)setCouponTagList:(id)a0;
- (id)couponTagList;
- (void)setCouponName:(id)a0;
- (id)couponName;
- (void)setCouponType:(id)a0;
- (id)couponType;

@end
