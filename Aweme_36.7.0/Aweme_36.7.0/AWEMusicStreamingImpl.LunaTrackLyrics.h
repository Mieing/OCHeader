@class NSString, NSDictionary, _TtC21AWEMusicStreamingImpl20LunaLyricContributor;

@interface AWEMusicStreamingImpl.LunaTrackLyrics : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ content;
    void /* function */ language;
    void /* function */ translations;
    void /* function */ lyricType;
    void /* function */ translationLyricContent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lyricContributor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_translationContributor;
}

@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) BOOL isRequestHidden;
@property (nonatomic, copy) NSDictionary *translations;
@property (nonatomic, copy) NSString *lyricType;
@property (nonatomic) long long lyricId;
@property (nonatomic) long long translationLyricID;
@property (nonatomic, copy) NSString *translationLyricContent;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl20LunaLyricContributor *lyricContributor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl20LunaLyricContributor *translationContributor;
@property (nonatomic) long long netResponseTime;

+ (id)lyricContributorJSONTransformer;
+ (id)translationContributorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isExpired;

@end
