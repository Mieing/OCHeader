@class AWEDTOPoiEntry, AWEDTOPoiPanel, NSString;

@interface AWEDTOPoiSettings : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDTOPoiEntry *poiEntry;
@property (retain, nonatomic) AWEDTOPoiPanel *poiPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)poiEntryJSONTransformer;
+ (id)poiPanelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
