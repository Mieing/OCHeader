@class AWEAwemeModel;

@interface AWECodeGenAwemeModel : AWECodeGenBaseCommonModel

@property (readonly, nonatomic) AWEAwemeModel *awemeModel;

+ (id)AWECodeGenAwemeModel_Adapter_localPropertyKeysMap;
+ (Class)adaptModelClass;

- (void)awe_mergeRequestId:(id)a0 logPassback:(id)a1;
- (void)setupWithModelDictionary:(id)a0;
- (id)customToJSON;
- (void)decodeModel:(id)a0;
- (void)encodeModel:(id)a0;
- (void)updateModel:(id)a0;

@end
