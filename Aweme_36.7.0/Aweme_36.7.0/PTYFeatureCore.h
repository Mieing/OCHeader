@class NSString, NSLock, NSDictionary;

@interface PTYFeatureCore : NSObject

@property (copy, nonatomic) NSString *aid;
@property (retain, nonatomic) NSLock *funcLock;
@property (retain, nonatomic) NSDictionary *featureSchemaFuncs;
@property (retain, nonatomic) NSDictionary *preporcessFuncs;

+ (void)registerFeatureProducer:(id)a0 callback:(id /* block */)a1;
+ (void)registerFeatureGroup:(id)a0 callback:(id /* block */)a1;
+ (id)getGroupFeatures:(id)a0 dump:(BOOL)a1;
+ (void)addFeature:(id)a0 numicValue:(float)a1 group:(id)a2;
+ (id)createCustomInstance;
+ (void)addFeature:(id)a0 dictValue:(id)a1 group:(id)a2;
+ (void)addFeature:(id)a0 stringValue:(id)a1 group:(id)a2;
+ (void)startSession:(id)a0 featureName:(id)a1;
+ (void)endSession:(id)a0 featureName:(id)a1;
+ (void)onEvent:(id)a0 parameter:(id)a1;
+ (void)getFeature:(id)a0 groupName:(id)a1 queryType:(unsigned long long)a2 returType:(unsigned long long)a3 n:(unsigned long long)a4 callback:(id /* block */)a5;
+ (id)getModelInstance:(id)a0 pop:(BOOL)a1;
+ (void)UnRegisterFeatureProducer:(id)a0 callback:(id /* block */)a1;
+ (void)getKVFeature:(id)a0 groupName:(id)a1 callback:(id /* block */)a2;
+ (id)getModelInstance:(id)a0;
+ (id)registerCppCallback:(id)a0 featureName:(id)a1 callback:(id /* block */)a2;
+ (void)unRegisterCppCallback:(id)a0 featureName:(id)a1 callbackId:(id)a2;
+ (id)registerPyCallback:(id)a0 featureName:(id)a1 business:(id)a2;
+ (void)unRegisterPyCallback:(id)a0 featureName:(id)a1 callbackId:(id)a2;
+ (id)sharedInstance;

- (void)setupWithAid:(id)a0;
- (id)getCepCore;
- (id)getFeatureSchemaWithBusiness:(id)a0 context:(id)a1 error:(id *)a2 featureNames:(id)a3;
- (id)getCloudUserFeatureWithBusiness:(id)a0 featureName:(id)a1;
- (id)getUEFeatureWithBusiness:(id)a0 featureName:(id)a1;
- (id)kvStore:(id)a0;
- (id)memoryCache:(id)a0;
- (id)collectFeaturesWithBusiness:(id)a0 featureNames:(id)a1 context:(id)a2 error:(id *)a3;
- (void)registerCustomFuncWithName:(id)a0 function:(id /* block */)a1 error:(id *)a2;
- (id)getFeatureSchemaWithBusiness:(id)a0 context:(id)a1 error:(id *)a2 featureNames:(id)a3 needCollect:(BOOL)a4;
- (id)runEventCache:(id)a0;
- (void)unregisterCustomFuncWithName:(id)a0 error:(id *)a1;
- (void)registerFeatureSchemaWithBusiness:(id)a0 schemaConfig:(id)a1 mciroOpPath:(id)a2 error:(id *)a3;
- (void)unRegisterFeatureSchemaWithBusiness:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
