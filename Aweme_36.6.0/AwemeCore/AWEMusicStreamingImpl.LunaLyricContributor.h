@class NSString, _TtC21AWEMusicStreamingImpl13LunaUserBrief;

@interface AWEMusicStreamingImpl.LunaLyricContributor : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ filterReason;
}

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl13LunaUserBrief *user;
@property (nonatomic, copy) NSString *filterReason;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
