@class IESECLiveGoodsModel, NSNumber, NSString;

@interface IESECLiveReplayCardModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveGoodsModel *goodsModel;
@property (retain, nonatomic) NSNumber *explainStartTime;
@property (retain, nonatomic) NSNumber *explainEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)goodsModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
