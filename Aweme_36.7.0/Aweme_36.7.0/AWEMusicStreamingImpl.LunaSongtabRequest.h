@class NSArray, NSString, _TtC21AWEMusicStreamingImpl13LunaFeedExtra;

@interface AWEMusicStreamingImpl.LunaSongtabRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ playedMedia;
    void /* function */ feedMode;
}

@property (nonatomic, copy) NSArray *playedMedia;
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic, copy) NSString *feedMode;
@property (nonatomic) BOOL withClientCache;
@property (nonatomic) long long didFirstUseTime;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl13LunaFeedExtra *feedExtra;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
