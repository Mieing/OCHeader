@class NSString, NSNumber, IESECLiveGoodsHotSaleModel;

@interface IESECLiveAuctionDigitalAtmosphere : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *frequencyKey;
@property (retain, nonatomic) NSNumber *frequencyCount;
@property (retain, nonatomic) IESECLiveGoodsHotSaleModel *atmosphereData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)atmosphereDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
