@class IESECLiveToggleModel, NSString;

@interface IESECLiveGoodsListTopModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveToggleModel *toggle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
