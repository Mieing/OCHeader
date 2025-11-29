@interface AWEMusicStreamingImpl.LunaMyUserState : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL blockedByMe;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic, readonly) BOOL followedByMe;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
