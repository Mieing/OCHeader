@class _TtC21AWEMusicStreamingImpl26LunaAllCommentsLikedDetail;

@interface AWEMusicStreamingImpl.LunaUserStats : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* unknown type, empty encoding */ countFollower;
}

@property (nonatomic) long long countAllLiked;
@property (nonatomic) long long countFollowing;
@property (nonatomic) long long countFollowingFromLuna;
@property (nonatomic) long long countFollowerFromLuna;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl26LunaAllCommentsLikedDetail *allCommentsLikedDetail;

+ (id)allCommentsLikedDetailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
