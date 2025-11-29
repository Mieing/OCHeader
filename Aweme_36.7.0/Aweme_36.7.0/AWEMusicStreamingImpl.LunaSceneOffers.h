@class NSDictionary, NSArray;

@interface AWEMusicStreamingImpl.LunaSceneOffers : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ offerMap;
    void /* function */ sceneOfferList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultPurchasePrice;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultSVIPPurchasePrice;
    void /* function */ toPreFetchProductIDs;
}

@property (nonatomic, copy) NSDictionary *offerMap;
@property (nonatomic, copy) NSDictionary *sceneOfferList;
@property (nonatomic) long long defaultPurchasePrice;
@property (nonatomic) long long defaultSVIPPurchasePrice;
@property (nonatomic, copy) NSArray *toPreFetchProductIDs;

+ (id)offerMapJSONTransformer;
+ (id)sceneOfferListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
