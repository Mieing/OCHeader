@class _TtC21AWEMusicStreamingImpl9LunaTrack;

@interface AWEMusicStreamingImpl.LunaSearchEntity : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaTrack *track;

+ (id)trackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
