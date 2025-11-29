@class NSString, NSArray, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaAlbumLink : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ name;
    void /* function */ coverGradientColors;
    void /* function */ backgroundColor;
}

@property (nonatomic, readonly) _TtC21AWEMusicStreamingImpl11LunaURLInfo *urlPlayerBg;
@property (nonatomic, readonly) _TtC21AWEMusicStreamingImpl11LunaURLInfo *urlPic;
@property (nonatomic, readonly) _TtC21AWEMusicStreamingImpl11LunaURLInfo *coverImgURLInfo;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long releaseDate;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *cover;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *playerBg;
@property (nonatomic, copy) NSArray *coverGradientColors;
@property (nonatomic, copy) NSString *backgroundColor;

+ (id)coverJSONTransformer;
+ (id)playerBgJSONTransformer;
+ (id)coverGradientColorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
