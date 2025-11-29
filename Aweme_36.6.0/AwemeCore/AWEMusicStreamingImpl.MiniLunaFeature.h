@class NSString, _TtC21AWEMusicStreamingImpl15LunaTrackAnchor;

@interface AWEMusicStreamingImpl.MiniLunaFeature : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ miniLunaStatus;
}

@property (nonatomic, copy) NSString *miniLunaStatus;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaTrackAnchor *anchor;
@property (nonatomic) BOOL isPreview;

+ (id)anchorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
