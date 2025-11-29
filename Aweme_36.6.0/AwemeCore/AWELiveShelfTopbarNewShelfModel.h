@class NSString, AWELiveShelfClassifyTabsModel;

@interface AWELiveShelfTopbarNewShelfModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELiveShelfClassifyTabsModel *classifyTabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
