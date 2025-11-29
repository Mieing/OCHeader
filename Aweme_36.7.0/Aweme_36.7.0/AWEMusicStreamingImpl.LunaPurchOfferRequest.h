@class NSString;

@interface AWEMusicStreamingImpl.LunaPurchOfferRequest : AWEMusicStreamingImpl.LunaRequestBaseModel {
    void /* function */ offerID;
    void /* function */ SettleItemID;
}

@property (nonatomic, copy) NSString *offerID;
@property (nonatomic, readonly) long long settleMethod;
@property (nonatomic, copy) NSString *SettleItemID;
@property (nonatomic) long long settleItemType;
@property (nonatomic) long long quantity;

- (Class)responseModelClass;
- (void).cxx_destruct;
- (id)init;
- (id)params;
- (id)path;

@end
