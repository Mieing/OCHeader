@interface AWEMusicPlayerMeta : MTLModel

@property (nonatomic) double loudness;
@property (nonatomic) double peak;

+ (id)metaWithJsonString:(id)a0;

@end
