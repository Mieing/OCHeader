@class NSString, AWESearchAIGCSharePanelPublishCoverViewModel;

@interface AWESearchAIGCIntegrationDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWESearchAIGCSharePanelPublishCoverViewModel *sharePanelPublishCoverViewModel;
@property (nonatomic) BOOL isDisablePublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publishVideoCoverInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
