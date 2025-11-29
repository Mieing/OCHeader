@class NSArray, NSString, AWESocialCameraEffectConfigPanelCategoryParamsModel;

@interface AWESocialCameraEffectConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *categoryArray;
@property (retain, nonatomic) AWESocialCameraEffectConfigPanelCategoryParamsModel *panelCategoryParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryArrayJSONTransformer;
+ (id)panelCategoryParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
