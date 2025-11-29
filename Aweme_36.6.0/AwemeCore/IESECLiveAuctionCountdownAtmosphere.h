@class NSNumber, NSString, IESECLiveGoodsHotSaleModel;

@interface IESECLiveAuctionCountdownAtmosphere : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (retain, nonatomic) IESECLiveGoodsHotSaleModel *atmosphereData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)atmosphereDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
