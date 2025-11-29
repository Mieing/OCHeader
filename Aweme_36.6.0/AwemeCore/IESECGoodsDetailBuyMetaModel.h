@class NSNumber, NSString, NSDictionary;

@interface IESECGoodsDetailBuyMetaModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *productMinPrice;
@property (copy, nonatomic) NSString *activityGroupId;
@property (copy, nonatomic) NSString *baseVerified;
@property (nonatomic) BOOL isInsuranceProduct;
@property (nonatomic) BOOL isAuctionProduct;
@property (nonatomic) BOOL isScarceBuyProduct;
@property (nonatomic) BOOL isMemberSampleProduct;
@property (nonatomic) unsigned long long virtualGoodsOrderState;
@property (copy, nonatomic) NSString *orderUrl;
@property (copy, nonatomic) NSString *groupbuyOrderUrl;
@property (copy, nonatomic) NSString *custombuyOrderUrl;
@property (copy, nonatomic) NSString *orderUrlV2;
@property (copy, nonatomic) NSString *groupbuyOrderUrlV2;
@property (copy, nonatomic) NSString *custombuyOrderUrlV2;
@property (copy, nonatomic) NSString *h5URL;
@property (copy, nonatomic) NSString *appURL;
@property (copy, nonatomic) NSString *innerAppURL;
@property (copy, nonatomic) NSString *universalLinksURL;
@property (copy, nonatomic) NSString *joinMemberURL;
@property (copy, nonatomic) NSString *lynxURL;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSDictionary *orderPrefetchData;
@property (nonatomic) BOOL isGroupbuying;
@property (nonatomic) BOOL isCustombuying;
@property (copy, nonatomic) NSString *findSameGoodsURL;
@property (copy, nonatomic) NSString *joinMemberType;
@property (nonatomic) BOOL useNewOrderSchema;
@property (copy, nonatomic) NSString *pdpSessionID;
@property (nonatomic) long long comboNum;
@property (copy, nonatomic) NSString *commonSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
