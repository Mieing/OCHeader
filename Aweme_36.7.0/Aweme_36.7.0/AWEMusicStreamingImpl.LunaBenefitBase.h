@class _TtC21AWEMusicStreamingImpl18LunaBenefitQuality, _TtC21AWEMusicStreamingImpl22LunaBenefitAudioEffect, _TtC21AWEMusicStreamingImpl19LunaBenefitDownload, _TtC21AWEMusicStreamingImpl20LunaBenefitPlayTrack;

@interface AWEMusicStreamingImpl.LunaBenefitBase : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl20LunaBenefitPlayTrack *playTrack;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl19LunaBenefitDownload *download;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaBenefitQuality *quality;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl22LunaBenefitAudioEffect *audioEffect;

+ (id)playTrackJSONTransformer;
+ (id)downloadJSONTransformer;
+ (id)qualityJSONTransformer;
+ (id)audioEffectJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
