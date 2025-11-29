@class NSString, NSDictionary, AWEAwemeModel, AWEUserModel;

@interface AWEGoodsTrackObject : NSObject

@property (readonly, nonatomic) NSString *__AwemeID;
@property (readonly, nonatomic) NSString *__SellerID;
@property (readonly, nonatomic) BOOL __HasCoupon;
@property (readonly, nonatomic) BOOL __isVirtualGoods;
@property (readonly, nonatomic) NSString *__ProductLabel;
@property (readonly, nonatomic) NSString *__PromotionID;
@property (readonly, nonatomic) NSString *__ProductID;
@property (readonly, nonatomic) long long __PromotionSource;
@property (readonly, nonatomic) NSString *__ItemTypeForV1;
@property (readonly, copy, nonatomic) NSString *__ButtonType;
@property (readonly, nonatomic) long long __CartProductCnt;
@property (readonly, nonatomic) NSString *__FollowStatus;
@property (nonatomic) unsigned long long trackType;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) id goods;
@property (retain, nonatomic) AWEUserModel *seller;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterMethodV3;
@property (copy, nonatomic) NSString *carrierType;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSDictionary *passthroughDict;
@property (readonly, copy, nonatomic) NSDictionary *entranceInfo;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *sortType;
@property (copy, nonatomic) NSString *openPageMode;
@property (copy, nonatomic) NSString *metaParamsString;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *sourceMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *btmInfoDict;
@property (copy, nonatomic) NSString *standardTrackParam;
@property (copy, nonatomic) NSString *standardMarketingTrackParam;

+ (id)productLabelOfStateInShop:(long long)a0;

- (id)ecomStandardTrackParam;
- (id)ecomStandardMarketingTrackParam;
- (id)__Seller;
- (id)__Goods;
- (id)__GoodsSeedingModel;
- (id)__BasicGoods;
- (id)ecomStandardMarketingTrackParamForAwemeModel:(id)a0;
- (id)ecomStandardTrackParamForAwemeModel:(id)a0;
- (void).cxx_destruct;

@end
