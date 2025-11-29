@class _TtC21AWEMusicStreamingImpl19LunaActivityFreeVip, _TtC21AWEMusicStreamingImpl15LunaSceneOffers, NSDictionary, _TtC21AWEMusicStreamingImpl10LunaAssets, _TtC21AWEMusicStreamingImpl14LunaMembership, _TtC21AWEMusicStreamingImpl15LunaBenefitBase;

@interface AWEMusicStreamingImpl.LunaCommerceInfoResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaBenefitBase *benefitBase;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl10LunaAssets *assets;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaSceneOffers *sceneOffers;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl19LunaActivityFreeVip *activityFreeVip;
@property (nonatomic, retain) NSDictionary *trade;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaMembership *membership;
@property (nonatomic, retain) NSDictionary *playEntitlements;
@property (nonatomic, retain) NSDictionary *extra;

+ (id)benefitBaseJSONTransformer;
+ (id)assetsJSONTransformer;
+ (id)sceneOffersJSONTransformer;
+ (id)activityFreeVipJSONTransformer;
+ (id)membershipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)toDic;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
