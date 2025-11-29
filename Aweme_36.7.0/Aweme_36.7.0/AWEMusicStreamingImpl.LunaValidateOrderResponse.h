@class NSString, _TtC21AWEMusicStreamingImpl17LunaAlbumResponse, _TtC21AWEMusicStreamingImpl10LunaAssets;

@interface AWEMusicStreamingImpl.LunaValidateOrderResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ orderID;
}

@property (nonatomic, copy) NSString *orderID;
@property (nonatomic) long long orderStatus;
@property (nonatomic, readonly) long long _orderStatus;
@property (nonatomic) long long productType;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl17LunaAlbumResponse *album;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl10LunaAssets *assets;

+ (id)assetsJSONTransformer;
+ (id)albumJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
