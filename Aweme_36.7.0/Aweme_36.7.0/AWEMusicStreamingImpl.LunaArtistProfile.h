@class NSString, NSArray, _TtC21AWEMusicStreamingImpl16LunaArtistCareer, _TtC21AWEMusicStreamingImpl14LunaArtistBorn;

@interface AWEMusicStreamingImpl.LunaArtistProfile : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ name;
    void /* function */ alias;
    void /* unknown type, empty encoding */ $__lazy_storage_$_born;
    void /* function */ nameTranslation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_career;
    void /* function */ intro;
    void /* function */ nationality;
    void /* function */ fullDisplayName;
    void /* function */ simpleDisplayName;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *alias;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaArtistBorn *born;
@property (nonatomic, copy) NSString *nameTranslation;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaArtistCareer *career;
@property (nonatomic, copy) NSString *intro;
@property (nonatomic, copy) NSString *nationality;
@property (nonatomic, copy) NSString *fullDisplayName;
@property (nonatomic, copy) NSString *simpleDisplayName;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
