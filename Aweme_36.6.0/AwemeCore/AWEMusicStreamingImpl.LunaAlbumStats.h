@interface AWEMusicStreamingImpl.LunaAlbumStats : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic) long long collectedCount;
@property (nonatomic) long long sharedCount;
@property (nonatomic) long long totalPurchCount;
@property (nonatomic) long long onlySubscriberPlayableCount;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
