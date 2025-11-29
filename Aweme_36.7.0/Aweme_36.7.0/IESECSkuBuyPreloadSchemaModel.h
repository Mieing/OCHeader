@class NSString, NSArray, NSDictionary, NSNumber;

@interface IESECSkuBuyPreloadSchemaModel : NSObject

@property (copy, nonatomic) NSString *productId;
@property (retain, nonatomic) NSNumber *isSingleSku;
@property (retain, nonatomic) NSNumber *sceneType;
@property (copy, nonatomic) NSString *productChannelId;
@property (copy, nonatomic) NSString *productChannelType;
@property (copy, nonatomic) NSString *skuEnterFrom;
@property (retain, nonatomic) NSNumber *panelWidth;
@property (retain, nonatomic) NSNumber *panelHeight;
@property (retain, nonatomic) NSNumber *enterFromLiveSaaS;
@property (retain, nonatomic) NSNumber *ultimateBuyAB;
@property (retain, nonatomic) NSNumber *ultimateBuyVersion;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *sourceTypeNew;
@property (copy, nonatomic) NSString *bizIdentity;
@property (copy, nonatomic) NSString *shopId;
@property (retain, nonatomic) NSNumber *groupType;
@property (copy, nonatomic) NSString *hotSaleSkuId;
@property (copy, nonatomic) NSString *hotSaleType;
@property (copy, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSNumber *autoApplyCoupon;
@property (copy, nonatomic) NSArray *defaultSpecId;
@property (copy, nonatomic) NSString *marketingChannel;
@property (copy, nonatomic) NSString *addressId;
@property (retain, nonatomic) NSNumber *defaultCount;
@property (copy, nonatomic) NSString *poiInfo;
@property (retain, nonatomic) NSNumber *disableServerSpecsDefaultSelect;
@property (copy, nonatomic) NSDictionary *cpsParams;
@property (copy, nonatomic) NSString *passThrough;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isClickPreload;

- (void).cxx_destruct;

@end
