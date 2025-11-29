@class NSArray, IESLiveChargeBannerModel, NSString, NSDictionary, NSNumber, IESLiveIAPbindGuideData;

@interface IESLiveChargeModelContainer : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *charges;
@property (retain, nonatomic) IESLiveChargeBannerModel *topBanner;
@property (retain, nonatomic) NSNumber *defaultDiamondID;
@property (copy, nonatomic) NSString *bannerLynxUrl;
@property (retain, nonatomic) NSNumber *recommendedDiamondID;
@property (nonatomic) BOOL isFirstCharge;
@property (nonatomic) long long cacheStrategy;
@property (nonatomic) BOOL needManuallyAgreement;
@property (retain, nonatomic) NSDictionary *diamondToExtra;
@property (nonatomic) BOOL iapAllowCustomizedDiamond;
@property (copy, nonatomic) NSString *diamondExtraForCreateOrder;
@property (retain, nonatomic) IESLiveIAPbindGuideData *iapBindGuide;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chargesJSONTransformer;
+ (id)topBannerJSONTransformer;
+ (id)iapBindGuideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
