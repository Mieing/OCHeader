@class NSArray, NSString;

@interface AWEMusicStreamingImpl.LunaShareCountRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ items;
    void /* function */ sharePlatform;
}

@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSString *sharePlatform;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
