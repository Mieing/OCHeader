@class NSString, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaAssetInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ assetOrderID;
    void /* function */ assetType;
    void /* function */ assetName;
    void /* function */ redeemExternalAccount;
}

@property (nonatomic, copy) NSString *assetOrderID;
@property (nonatomic, copy) NSString *assetType;
@property (nonatomic, copy) NSString *assetName;
@property (nonatomic) long long assetStatus;
@property (nonatomic) long long redeemExpireTime;
@property (nonatomic) long long redeemTime;
@property (nonatomic, copy) NSString *redeemExternalAccount;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *assetImage;

+ (id)assetImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
