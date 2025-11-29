@class NSArray;

@interface AWEMusicStreamingImpl.LunaDeleteCollectedMediaListRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ media;
}

@property (nonatomic, copy) NSArray *media;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;
- (id)initWithMedia:(id)a0;

@end
