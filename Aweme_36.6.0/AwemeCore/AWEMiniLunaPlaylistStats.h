@interface AWEMiniLunaPlaylistStats : AWEBaseApiModel

@property (nonatomic) long long countCollected;
@property (nonatomic) long long countShared;
@property (nonatomic) long long countComment;
@property (nonatomic) long long countOnlySubscriberPlayable;

+ (id)JSONKeyPathsByPropertyKey;

@end
