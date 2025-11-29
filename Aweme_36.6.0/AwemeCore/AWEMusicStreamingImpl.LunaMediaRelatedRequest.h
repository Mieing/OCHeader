@class NSArray, NSString;

@interface AWEMusicStreamingImpl.LunaMediaRelatedRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ mediaList;
    void /* function */ sceneName;
    void /* function */ playedMedia;
}

@property (nonatomic, copy) NSArray *mediaList;
@property (nonatomic, copy) NSString *sceneName;
@property (nonatomic, copy) NSArray *playedMedia;
@property (nonatomic) long long reqCount;
@property (nonatomic) long long firstReqTime;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
