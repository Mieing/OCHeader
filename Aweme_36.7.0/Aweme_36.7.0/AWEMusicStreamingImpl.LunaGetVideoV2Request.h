@class NSString;

@interface AWEMusicStreamingImpl.LunaGetVideoV2Request : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ id;
    void /* function */ mediaType;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *mediaType;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
