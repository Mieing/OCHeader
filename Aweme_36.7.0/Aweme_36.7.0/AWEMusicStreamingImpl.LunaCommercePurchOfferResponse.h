@class NSString, _TtC21AWEMusicStreamingImpl10LunaIapPay;

@interface AWEMusicStreamingImpl.LunaCommercePurchOfferResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ orderID;
}

@property (nonatomic, copy) NSString *orderID;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl10LunaIapPay *iapPayInfo;

+ (id)iapPayInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
