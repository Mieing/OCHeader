@class NSArray, _TtC21AWEMusicStreamingImpl16LunaActivityInfo;

@interface AWEMusicStreamingImpl.LunaBenefitAudioEffect : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ audioEffectDetail;
}

@property (nonatomic, copy) NSArray *audioEffectDetail;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaActivityInfo *activityInfo;

+ (id)audioEffectDetailJSONTransformer;
+ (id)activityInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
