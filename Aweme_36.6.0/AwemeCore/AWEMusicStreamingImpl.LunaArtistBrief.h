@class NSString, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaArtistBrief : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ name;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatar;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *avatar;

+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
