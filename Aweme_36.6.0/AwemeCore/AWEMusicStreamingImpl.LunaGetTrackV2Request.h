@class NSString;

@interface AWEMusicStreamingImpl.LunaGetTrackV2Request : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ id;
    void /* function */ mediaType;
    void /* function */ queueType;
    void /* function */ diversionAnchorType;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSString *queueType;
@property (nonatomic, copy) NSString *diversionAnchorType;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
