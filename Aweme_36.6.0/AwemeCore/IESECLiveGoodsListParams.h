@class NSString, NSDictionary;

@interface IESECLiveGoodsListParams : NSObject

@property (copy, nonatomic) NSString *relatedInfo;
@property (nonatomic) BOOL fromEnterRoomSchema;
@property (readonly, copy, nonatomic) NSDictionary *rawParams;
@property (readonly, copy, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) NSString *productID;
@property (readonly, nonatomic) NSString *promotionID;
@property (readonly, nonatomic) long long autoApplyCouponType;
@property (readonly, copy, nonatomic) NSString *couponID;
@property (copy, nonatomic) NSString *locateTabID;
@property (readonly, copy, nonatomic) NSString *couponCategory;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *previewCouponID;
@property (readonly, copy, nonatomic) NSString *previewExtraInfo;
@property (readonly, copy, nonatomic) NSString *liveListChannel;
@property (readonly, nonatomic) BOOL fromShopCart;

- (void)setupWithParams:(id)a0;
- (void)clearRelatedInfo;
- (void)modifyRelatedInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
