@class _TtC15AWEPaySwiftImpl22CCMRetainPromotionInfo, NSString, NSDictionary, AWEYAPTransportTrafficAgreement, NSArray, _TtC15AWEPaySwiftImpl25CCMEntryPagePromotionInfo, _TtC15AWEPaySwiftImpl19CCMEntrySumDiscount;

@interface AWEPaySwiftImpl.CCMTrafficCardDetail : MTLModel <MTLJSONSerializing> {
    void /* function */ trafficID;
    void /* function */ trafficName;
    void /* function */ userOpenStatus;
    void /* function */ openAction;
    void /* function */ openActionName;
    void /* function */ openScheme;
    void /* function */ ccmCardID;
    void /* function */ agreementDic;
    void /* function */ trafficBackImg;
    void /* function */ serviceList;
    void /* function */ trafficLogo;
    void /* function */ lynxCards;
    void /* function */ bannerReminderContent;
    void /* function */ operations;
}

@property (nonatomic, copy) NSString *trafficID;
@property (nonatomic, copy) NSString *trafficName;
@property (nonatomic, copy) NSString *userOpenStatus;
@property (nonatomic, copy) NSString *openAction;
@property (nonatomic, copy) NSString *openActionName;
@property (nonatomic, copy) NSString *openScheme;
@property (nonatomic, copy) NSString *ccmCardID;
@property (nonatomic, copy) NSDictionary *agreementDic;
@property (nonatomic, retain) AWEYAPTransportTrafficAgreement *agreement;
@property (nonatomic, copy) NSString *trafficBackImg;
@property (nonatomic, copy) NSArray *serviceList;
@property (nonatomic, copy) NSString *trafficLogo;
@property (nonatomic, copy) NSDictionary *lynxCards;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl25CCMEntryPagePromotionInfo *promotionInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl19CCMEntrySumDiscount *sumDiscountInfo;
@property (nonatomic, copy) NSString *bannerReminderContent;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl22CCMRetainPromotionInfo *retainPromotionInfo;
@property (nonatomic, copy) NSArray *operations;

+ (id)serviceListJSONTransformer;
+ (id)operationsJSONTransformer;
+ (id)lynxCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
