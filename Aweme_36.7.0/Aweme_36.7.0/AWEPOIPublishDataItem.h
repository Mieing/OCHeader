@class NSString, NSDictionary, AWEPOIPublishSelectedAnchorData;

@interface AWEPOIPublishDataItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSDictionary *actionData;
@property (copy, nonatomic) NSString *timestamp;
@property (retain, nonatomic) AWEPOIPublishSelectedAnchorData *selectedAnchorData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectedAnchorDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
