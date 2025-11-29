@class NSString, _TtC21AWEMusicStreamingImpl18LunaSettleItemInfo, _TtC21AWEMusicStreamingImpl18LunaSubscriberInfo, _TtC21AWEMusicStreamingImpl13LunaOrderInfo;

@interface AWEMusicStreamingImpl.LunaValidatePurchResponseInfo : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ orderID;
}

@property (nonatomic, copy) NSString *orderID;
@property (nonatomic) long long orderStatus;
@property (nonatomic, readonly) long long _orderStatus;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl13LunaOrderInfo *orderInfo;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaSubscriberInfo *subscriberInfo;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaSettleItemInfo *SettleItem;

+ (id)orderInfoJSONTransformer;
+ (id)subscriberInfoJSONTransformer;
+ (id)SettleItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
