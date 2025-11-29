@class NSArray, NSString, AWELeftSideBarAssetTipsInfoDataModel;

@interface AWELeftSideBarAssetInfoDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELeftSideBarAssetTipsInfoDataModel *tipsInfoModel;
@property (retain, nonatomic) NSArray *entryModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryModelsJSONTransformer;
+ (id)tipsInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
