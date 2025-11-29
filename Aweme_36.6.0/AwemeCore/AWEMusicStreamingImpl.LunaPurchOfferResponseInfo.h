@class NSString, NSArray;

@interface AWEMusicStreamingImpl.LunaPurchOfferResponseInfo : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ orderID;
    void /* function */ pcsOrderID;
    void /* function */ toPurchOffers;
    void /* function */ settleType;
}

@property (nonatomic, copy) NSString *orderID;
@property (nonatomic, copy) NSString *pcsOrderID;
@property (nonatomic) long long amount;
@property (nonatomic, retain) NSString *iapPurchInfo;
@property (nonatomic) long long orderStatus;
@property (nonatomic) long long orderCreateStatus;
@property (nonatomic, readonly) long long _orderCreateStatus;
@property (nonatomic, copy) NSArray *toPurchOffers;
@property (nonatomic) long long currentBalance;
@property (nonatomic, copy) NSString *settleType;

+ (id)toPurchOffersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
