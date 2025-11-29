@class _TtC21AWEMusicStreamingImpl18LunaSearchDataMeta, _TtC21AWEMusicStreamingImpl16LunaSearchEntity, _TtC21AWEMusicStreamingImpl20LunaTrackLyricsMatch;

@interface AWEMusicStreamingImpl.LunaSearchItem : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaSearchEntity *entity;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaSearchDataMeta *meta;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl20LunaTrackLyricsMatch *lyricsMatchInfo;

+ (id)entityJSONTransformer;
+ (id)metaJSONTransformer;
+ (id)lyricsMatchInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
