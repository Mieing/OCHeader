@class NSString;

@interface AWEMusicStreamingImpl.LunaArtistBorn : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ birthDate;
}

@property (nonatomic, copy) NSString *birthDate;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
