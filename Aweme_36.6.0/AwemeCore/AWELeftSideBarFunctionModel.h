@class AWELeftSideBarItemModel, NSArray, NSString, AWEHPSideBarStencilViewDataModel, AWELeftSideBarModuleModel, AWELeftSideBarModel;

@interface AWELeftSideBarFunctionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL componentDiff;
@property (retain, nonatomic) AWEHPSideBarStencilViewDataModel *uiConfig;
@property (retain, nonatomic) AWELeftSideBarModuleModel *firstPageModuleModel;
@property (retain, nonatomic) NSArray *firstPageModules;
@property (retain, nonatomic) AWELeftSideBarItemModel *settingPageItemModel;
@property (retain, nonatomic) AWELeftSideBarModel *extraSideBarModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uiConfigJSONTransformer;
+ (id)extraSideBarModelJSONTransformer;
+ (id)firstPageModuleModelJSONTransformer;
+ (id)firstPageModulesJSONTransformer;
+ (id)settingPageItemModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)abstract;

@end
