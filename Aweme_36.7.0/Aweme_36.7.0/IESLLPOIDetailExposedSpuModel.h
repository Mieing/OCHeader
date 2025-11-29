@class IESLLPOISpuModel, NSString, IESLLPOIServiceSpuEntryModel;

@interface IESLLPOIDetailExposedSpuModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLPOIServiceSpuEntryModel *spuListEntry;
@property (retain, nonatomic) IESLLPOISpuModel *poiDetailSpu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
