@class NSString, AWEPostPageJingXuanSettingsEditItemAnchorInfoModel;

@interface AWEPostPageJingXuanSettingsEditItemModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEPostPageJingXuanSettingsEditItemAnchorInfoModel *anchorInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)anchorInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
