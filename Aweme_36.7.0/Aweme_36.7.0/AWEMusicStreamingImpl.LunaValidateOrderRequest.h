@class NSString;

@interface AWEMusicStreamingImpl.LunaValidateOrderRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ orderId;
}

@property (nonatomic, copy) NSString *orderId;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
