@interface AWEMusicStreamingImpl.LunaBenefitPlayTrack : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic) long long expireTime;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
