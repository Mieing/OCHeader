@class NSString, _TtC21AWEMusicStreamingImpl14OpenAnchorInfo;

@interface AWEMusicStreamingImpl.LunaShareInfoRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ itemType;
    void /* function */ itemID;
}

@property (nonatomic, copy) NSString *itemType;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14OpenAnchorInfo *openAnchorInfo;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
