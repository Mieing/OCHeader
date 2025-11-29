@class AWESearchHotSpotConfigModel, AWESearchCardTemplateModel, NSString;

@interface AWESearchCachalotVerticalBottomBarConfigTopicDiscussExtraModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWESearchHotSpotConfigModel *bottomBarConfig;
@property (retain, nonatomic) AWESearchCardTemplateModel *cardTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bottomBarConfigJSONTransformer;
+ (id)cardTemplateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
