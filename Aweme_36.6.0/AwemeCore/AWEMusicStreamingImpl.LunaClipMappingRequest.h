@class NSArray, NSString;

@interface AWEMusicStreamingImpl.LunaClipMappingRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ srcMedia;
    void /* function */ scene;
}

@property (nonatomic, copy) NSArray *srcMedia;
@property (nonatomic, copy) NSString *scene;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
