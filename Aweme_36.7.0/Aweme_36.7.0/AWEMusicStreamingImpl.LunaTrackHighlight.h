@interface AWEMusicStreamingImpl.LunaTrackHighlight : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic) long long duration;
@property (nonatomic) long long start;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
