@class NSString, NSDictionary;

@interface AWEMusicStreamingImpl.LunaUgInfo : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ interestingTrackID;
    void /* function */ sceneName;
    void /* function */ subSceneName;
    void /* function */ extra;
}

@property (nonatomic, copy) NSString *interestingTrackID;
@property (nonatomic) long long isNeedInsert;
@property (nonatomic) long long insertTimeMs;
@property (nonatomic, copy) NSString *sceneName;
@property (nonatomic, copy) NSString *subSceneName;
@property (nonatomic, copy) NSDictionary *extra;

- (void).cxx_destruct;
- (id)init;

@end
