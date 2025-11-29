@class NSArray;

@interface AWEMusicStreamingImpl.LunaDeletePlaylistRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ deletePlaylistIDs;
}

@property (nonatomic, copy) NSArray *deletePlaylistIDs;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
