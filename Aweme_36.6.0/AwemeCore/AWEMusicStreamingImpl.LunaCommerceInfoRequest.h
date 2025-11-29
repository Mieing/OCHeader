@class NSArray;

@interface AWEMusicStreamingImpl.LunaCommerceInfoRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ includes;
}

@property (nonatomic, copy) NSArray *includes;

- (Class)responseModelClass;
- (BOOL)needJsonResponse;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
