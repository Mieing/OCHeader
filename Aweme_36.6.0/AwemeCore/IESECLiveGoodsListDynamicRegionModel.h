@class NSNumber, NSString, IESECLiveDynamicRegionModel;

@interface IESECLiveGoodsListDynamicRegionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *absolutePosition;
@property (retain, nonatomic) IESECLiveDynamicRegionModel *region;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
