@class NSString, NSArray, AWECodeGenPermissionControlModel;

@interface AWECodeGenServiceAccountModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *serviceAccountId;
@property (copy, nonatomic) NSString *serviceAccountName;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSArray *subcategoryListModelArray;
@property (retain, nonatomic) AWECodeGenPermissionControlModel *permissionControlModel;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *bizExtra;
@property (nonatomic) int appId;
@property (nonatomic) int serviceAccountIconType;

+ (id)modelWithJSONDictionary:(id)a0 sharedModelInfos:(id)a1;
+ (id)modelWithJSONDictionary:(id)a0;
+ (id)propertyToModelClassInArrayMap;
+ (id)subscribe_modelWithJSONDictionary:(id)a0;
+ (id)subscribe_modelWithJSONDictionary:(id)a0 sharedModelInfos:(id)a1;
+ (void)_aweLazyRegisterStaticLoad_AWEMRSubscribeHelper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
