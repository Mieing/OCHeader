@interface AWEMusicStreamingImpl.LunaMyAlbumState : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic) BOOL isCollected;
@property (nonatomic) long long countPurch;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
