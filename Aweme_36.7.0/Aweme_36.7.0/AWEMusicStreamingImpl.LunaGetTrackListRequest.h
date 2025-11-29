@class NSArray;

@interface AWEMusicStreamingImpl.LunaGetTrackListRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ trackIDList;
}

@property (nonatomic, copy) NSArray *trackIDList;

- (Class)responseModelClass;
- (id)initWithTrackIDList:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
