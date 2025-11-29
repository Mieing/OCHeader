@class NSString, AWEDTOAnchorPanel, AWEDTOAnchorEntry;

@interface AWEDTOAnchorSettings : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDTOAnchorPanel *anchorPanel;
@property (retain, nonatomic) AWEDTOAnchorEntry *anchorEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorPanelJSONTransformer;
+ (id)anchorEntryJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
