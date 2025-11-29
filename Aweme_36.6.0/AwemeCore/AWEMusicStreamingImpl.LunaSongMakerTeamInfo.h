@class NSArray;

@interface AWEMusicStreamingImpl.LunaSongMakerTeamInfo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ composers;
    void /* function */ lyricists;
}

@property (nonatomic, copy) NSArray *composers;
@property (nonatomic, copy) NSArray *lyricists;

+ (id)composersJSONTransformer;
+ (id)lyricistsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
