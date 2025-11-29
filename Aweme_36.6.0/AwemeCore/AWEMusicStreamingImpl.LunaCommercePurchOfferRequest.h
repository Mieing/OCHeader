@class NSString;

@interface AWEMusicStreamingImpl.LunaCommercePurchOfferRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ scene;
    void /* function */ offserSnapShotID;
}

@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSString *offserSnapShotID;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
