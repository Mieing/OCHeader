@class APCDTOAnchorPanel, APCDTOAnchorEntry, NSString;

@interface APCDTOAnchorSettings : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) APCDTOAnchorPanel *anchorPanel;
@property (retain, nonatomic) APCDTOAnchorEntry *anchorEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorPanelJSONTransformer;
+ (id)anchorEntryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
