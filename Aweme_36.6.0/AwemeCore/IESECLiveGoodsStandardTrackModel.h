@class NSDictionary, NSString;

@interface IESECLiveGoodsStandardTrackModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *standardTrackParams;
@property (retain, nonatomic) NSDictionary *standardChainParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
