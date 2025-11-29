@class NSString, NSDictionary;

@interface AWEMusicStreamingImpl.LunaOffer : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ currencyCode;
    void /* function */ externalOfferID;
    void /* function */ offerID;
    void /* function */ offerType;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic, copy) NSString *externalOfferID;
@property (nonatomic, copy) NSString *offerID;
@property (nonatomic, copy) NSString *offerType;
@property (nonatomic) long long amount;
@property (nonatomic, retain) NSDictionary *resource;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
