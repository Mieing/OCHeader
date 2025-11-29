@class NSString, _TtC21AWEMusicStreamingImpl23LunaFeedPlaylistTrigger, NSArray;

@interface AWEMusicStreamingImpl.LunaPlaylistDetailRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ playlistID;
    void /* function */ cursor;
    void /* function */ secUid;
    void /* function */ media;
}

@property (nonatomic, copy) NSString *playlistID;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic) long long count;
@property (nonatomic) long long sceneType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL onlyNeedMedia;
@property (nonatomic) BOOL onlyNeedMediaID;
@property (nonatomic, copy) NSString *secUid;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl23LunaFeedPlaylistTrigger *feedTrigger;
@property (nonatomic, copy) NSArray *media;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
