@class NSString, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaUserBrief : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ nickname;
    void /* function */ artistID;
    void /* function */ signature;
    void /* function */ secUid;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, readonly) NSString *idStr;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *mediumAvatarUrl;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *thumbAvatarUrl;
@property (nonatomic) long long verificationType;
@property (nonatomic, copy) NSString *artistID;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic) BOOL isSecret;
@property (nonatomic) long long testTag;
@property (nonatomic, copy) NSString *secUid;

+ (id)mediumAvatarUrlJSONTransformer;
+ (id)thumbAvatarUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
