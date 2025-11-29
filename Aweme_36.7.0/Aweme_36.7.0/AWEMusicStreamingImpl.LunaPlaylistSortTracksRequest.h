@class NSString, NSArray;

@interface AWEMusicStreamingImpl.LunaPlaylistSortTracksRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ playlistID;
    void /* function */ media;
}

@property (nonatomic, copy) NSString *playlistID;
@property (nonatomic, copy) NSArray *media;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
