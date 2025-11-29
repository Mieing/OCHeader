@class NSString, NSDictionary, IESECLiveCardProductInfo, IESECLiveCardEventParam, IESECLiveCardControlModel;

@interface IESECLiveCardGoodsModel : IESECLiveGoodsBaseModel

@property (copy, nonatomic) NSString *uiTemplate;
@property (retain, nonatomic) NSDictionary *ui;
@property (retain, nonatomic) NSDictionary *uiUnRefreshable;
@property (retain, nonatomic) IESECLiveCardControlModel *control;
@property (retain, nonatomic) IESECLiveCardProductInfo *product;
@property (retain, nonatomic) IESECLiveCardEventParam *eventParam;

+ (id)productJSONTransformer;
+ (id)controlJSONTransformer;
+ (id)eventParamJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (id)promotionID;
- (id)shopID;
- (id)serverEventParams;
- (id)detailURL;
- (id)goodsID;
- (id)checkCallback;
- (id)standardEventTrack;
- (id)coverForDetail;
- (id)liveEventParams;
- (id)toADTrackParamsDictionary;
- (void).cxx_destruct;
- (long long)channelID;
- (long long)channelType;
- (id)itemType;
- (id)event;
- (long long)status;

@end
