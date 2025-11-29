@class NSString;

@interface AWEMusicStreamingImpl.LunaTrackSearchRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ query;
    void /* function */ searchID;
    void /* function */ searchMethod;
    void /* function */ searchScene;
}

@property (nonatomic, copy) NSString *query;
@property (nonatomic) long long cursor;
@property (nonatomic, copy) NSString *searchID;
@property (nonatomic, copy) NSString *searchMethod;
@property (nonatomic, copy) NSString *searchScene;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
