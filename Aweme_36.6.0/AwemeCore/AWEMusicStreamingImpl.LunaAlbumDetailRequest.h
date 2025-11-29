@class NSString;

@interface AWEMusicStreamingImpl.LunaAlbumDetailRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ albumID;
}

@property (nonatomic, copy) NSString *albumID;

- (Class)responseModelClass;
- (id)initWithAlbumID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
