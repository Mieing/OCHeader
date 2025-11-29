@interface AWEMusicStreamingImpl.LunaMediaStats : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic) long long collectedCount;
@property (nonatomic) long long commentCount;
@property (nonatomic) long long playedCount;
@property (nonatomic) long long sharedCount;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
