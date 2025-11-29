@interface AWEMusicStreamingImpl.LunaBenefitDownload : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic) long long quota;
@property (nonatomic) long long used;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
