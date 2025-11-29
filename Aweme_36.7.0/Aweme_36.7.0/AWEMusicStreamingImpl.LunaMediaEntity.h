@class _TtC21AWEMusicStreamingImpl9LunaTrack, _TtC21AWEMusicStreamingImpl9LunaVideo;

@interface AWEMusicStreamingImpl.LunaMediaEntity : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaTrack *track;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaVideo *video;

+ (id)videoJSONTransformer;
+ (id)trackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
