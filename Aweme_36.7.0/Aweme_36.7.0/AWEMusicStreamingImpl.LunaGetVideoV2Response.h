@class _TtC21AWEMusicStreamingImpl9LunaVideo, _TtC21AWEMusicStreamingImpl14LunaPlayerInfo;

@interface AWEMusicStreamingImpl.LunaGetVideoV2Response : AWEMusicStreamingImpl.LunaBaseApiResponseModel

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaVideo *video;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaPlayerInfo *player;
@property (nonatomic) long long riskResult;
@property (nonatomic) long long expireAt;

+ (id)videoJSONTransformer;
+ (id)playerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isExpired;

@end
