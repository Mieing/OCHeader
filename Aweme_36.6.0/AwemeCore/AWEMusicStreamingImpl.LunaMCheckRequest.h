@class NSArray;

@interface AWEMusicStreamingImpl.LunaMCheckRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ mediaList;
}

@property (nonatomic, copy) NSArray *mediaList;
@property (nonatomic) long long scene;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
