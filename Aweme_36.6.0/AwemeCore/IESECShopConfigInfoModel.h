@class IESECShopShoppingCartInfoModel, NSString, IESECShopTopSearchInfoModel, IESECShopServiceEntryInfo, IESECShopCouponEntranceInfo;

@interface IESECShopConfigInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL productWindowEntry;
@property (nonatomic) double productWindowCount;
@property (nonatomic) double productShopCount;
@property (retain, nonatomic) IESECShopShoppingCartInfoModel *cartInfo;
@property (copy, nonatomic) NSString *windowUrl;
@property (nonatomic) BOOL disableDetailEntry;
@property (copy, nonatomic) NSString *shopDetailUrl;
@property (copy, nonatomic) NSString *orderUrl;
@property (copy, nonatomic) NSString *searchHint;
@property (copy, nonatomic) NSString *serviceURL;
@property (retain, nonatomic) IESECShopServiceEntryInfo *serviceEntryInfo;
@property (copy, nonatomic) NSString *redpacketURL;
@property (nonatomic) BOOL shouldShowSearch;
@property (retain, nonatomic) IESECShopTopSearchInfoModel *topSearchInfo;
@property (nonatomic) BOOL hideLiveInfo;
@property (copy, nonatomic) NSString *redirectSchema;
@property (retain, nonatomic) IESECShopCouponEntranceInfo *couponEntranceInfo;
@property (retain, nonatomic) NSString *liveStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
