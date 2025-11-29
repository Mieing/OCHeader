@class NSString, NSDictionary, NSArray;

@interface AWEMusicStreamingImpl.LunaOfferV2 : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ offerID;
    void /* function */ externalOfferID;
    void /* function */ currencyCode;
    void /* function */ purchaseType;
    void /* function */ offerTraceKey;
    void /* function */ membershipType;
    void /* function */ productCategory;
}

@property (nonatomic, copy) NSString *offerID;
@property (nonatomic, copy) NSString *externalOfferID;
@property (nonatomic) long long purchasePrice;
@property (nonatomic) long long purchaseOriginPrice;
@property (nonatomic) long long renewPrice;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSString *purchaseType;
@property (nonatomic, copy) NSString *offerTraceKey;
@property (nonatomic, copy) NSString *membershipType;
@property (nonatomic, copy) NSString *productCategory;
@property (nonatomic) long long activityType;
@property (nonatomic) long long activityPromotionType;
@property (nonatomic, retain) NSDictionary *resourceMap;
@property (nonatomic, retain) NSArray *supportedPayChannels;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
