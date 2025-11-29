@class NSArray;

@interface AWEMusicStreamingImpl.LunaDeletePlaylistResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ deletedIds;
}

@property (nonatomic, copy) NSArray *deletedIds;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
