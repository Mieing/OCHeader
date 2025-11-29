@interface AWEMusicStreamingImpl.LunaMyTrackState : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isHidden;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
