@interface AWEMusicStreamingImpl.LunaVolumeInfo : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic) double loudness;
@property (nonatomic) double peak;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
