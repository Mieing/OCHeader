@class _TtC21AWEMusicStreamingImpl36LunaFreeSubscriberActivityDetailInfo, _TtC21AWEMusicStreamingImpl12LunaSubsInfo, NSArray;

@interface AWEMusicStreamingImpl.LunaGetMySubscriptionResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ toPurchOffers;
}

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl12LunaSubsInfo *subsInfo;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl36LunaFreeSubscriberActivityDetailInfo *freeSubscriberActivity;
@property (nonatomic, copy) NSArray *toPurchOffers;
@property (nonatomic) BOOL allowDidPurch;

+ (id)freeSubscriberActivityJSONTransformer;
+ (id)subsInfoJSONTransformer;
+ (id)toPurchOffersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)toDic;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
