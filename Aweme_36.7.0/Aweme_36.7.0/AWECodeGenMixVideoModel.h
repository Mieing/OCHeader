@class AWEMixVideoModel;

@interface AWECodeGenMixVideoModel : AWECodeGenBaseCommonModel

@property (readonly, nonatomic) AWEMixVideoModel *mixVideoModel;

+ (Class)adaptModelClass;
+ (id)AWECodeGenMixVideoModel_Adapter_localPropertyKeysMap;

- (void)awe_mergeRequestId:(id)a0 logPassback:(id)a1;
- (void)setupWithModelDictionary:(id)a0;
- (id)customToJSON;
- (void)decodeModel:(id)a0;
- (void)encodeModel:(id)a0;
- (void)updateModel:(id)a0;

@end
