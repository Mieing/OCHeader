@class NSString, _TtC21AWEMusicStreamingImpl16DisplayEntityNew, NSDictionary;

@interface AWEMusicStreamingImpl.LunaFeedItem : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ type;
    void /* unknown type, empty encoding */ $__lazy_storage_$_entity;
    void /* function */ debugInfo;
    void /* function */ sourceType;
    void /* function */ sceneName;
    void /* function */ subSceneName;
    void /* function */ cardContext;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16DisplayEntityNew *entity;
@property (nonatomic, copy) NSString *debugInfo;
@property (nonatomic, copy) NSString *sourceType;
@property (nonatomic, copy) NSString *sceneName;
@property (nonatomic, copy) NSString *subSceneName;
@property (nonatomic, copy) NSDictionary *cardContext;

+ (id)entityJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
