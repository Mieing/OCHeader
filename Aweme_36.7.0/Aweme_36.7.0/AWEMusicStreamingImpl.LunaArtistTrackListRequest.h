@class NSString;

@interface AWEMusicStreamingImpl.LunaArtistTrackListRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ artistID;
    void /* function */ maxCursor;
}

@property (nonatomic) long long sortType;
@property (nonatomic, copy) NSString *artistID;
@property (nonatomic, copy) NSString *maxCursor;
@property (nonatomic) long long count;

- (Class)responseModelClass;
- (id)initWithArtistID:(id)a0 sortType:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)method;
- (id)path;

@end
