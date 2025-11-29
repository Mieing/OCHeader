@class NSDictionary;

@interface AWECodeGenBaseCommonModel : AWEBaseDataModel <AWECodeGenCommonModelCustomAdapter>

@property (copy, nonatomic) NSDictionary *modelDictionary;

+ (Class)adaptModelClass;
+ (id)modelWithJSONDictionary:(id)a0 sharedModelInfos:(id)a1;

- (id)toJSONDictionary;
- (void)decodeModel:(id)a0;
- (void)encodeModel:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateModel:(id)a0;

@end
