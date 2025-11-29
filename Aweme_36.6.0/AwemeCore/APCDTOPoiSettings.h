@class APCDTOPoiPanel, APCDTOPoiEntry, NSString;

@interface APCDTOPoiSettings : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) APCDTOPoiPanel *poiPanel;
@property (retain, nonatomic) APCDTOPoiEntry *poiEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)poiEntryJSONTransformer;
+ (id)poiPanelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
