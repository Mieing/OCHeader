@class NSString, NSDictionary;

@interface AWEMusicStreamingImpl.LunaGetUpsellsResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ sellSubscriberType;
    void /* function */ upsellInfos;
}

@property (nonatomic, copy) NSString *sellSubscriberType;
@property (nonatomic, copy) NSDictionary *upsellInfos;

+ (id)upsellInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)toDic;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
