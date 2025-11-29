@class NSString, _TtC21AWEMusicStreamingImpl15LunaMediaEntity;

@interface AWEMusicStreamingImpl.LunaMediaResource : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ type;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaMediaEntity *entity;

+ (id)JSONKeyPathsByPropertyKey;

- (id)convertToFeedViewModel;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
