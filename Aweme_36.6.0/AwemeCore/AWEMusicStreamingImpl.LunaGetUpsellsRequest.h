@class NSString;

@interface AWEMusicStreamingImpl.LunaGetUpsellsRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ freeSubscriberToken;
}

@property (nonatomic) long long scene;
@property (nonatomic, copy) NSString *freeSubscriberToken;
@property (nonatomic) BOOL firstRequest;

- (Class)responseModelClass;
- (BOOL)needJsonResponse;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
