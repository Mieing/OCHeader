@class NSString, AWEPostPageJingXuanSettingsEditItemModel;

@interface AWEPostPageJingXuanSettingsResponseModel : AWEBaseApiModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPostPageJingXuanSettingsEditItemModel *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
