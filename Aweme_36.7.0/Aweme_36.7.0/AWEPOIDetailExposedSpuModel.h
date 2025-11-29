@class NSString, AWEPOIServiceSpuEntryModel, AWEPOISpuModel;

@interface AWEPOIDetailExposedSpuModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPOIServiceSpuEntryModel *spuListEntry;
@property (retain, nonatomic) AWEPOISpuModel *poiDetailSpu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
