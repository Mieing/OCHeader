@class NSString, FurionDataManager;

@interface FurionFactorManager : NSObject <FurionFactorConfigServiceProtocol, FurionFactorReadServiceProtocol, FurionFactorRegisterServiceProtocol, FurionFactorWriteServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) FurionDataManager *dataManager;

+ (void)initialize;
+ (id)sharedInstance;

- (void)addFactor:(id)a0 stringValue:(id)a1 group:(id)a2 dataSource:(id)a3;
- (id)getFactorsWithQueryGroups:(id)a0 bizInfo:(id /* block */)a1 error:(id *)a2;
- (id)getFactorWithKeyPath:(id)a0 ext:(id)a1 bizInfo:(id /* block */)a2 error:(id *)a3;
- (id)getFactorWithKeyPath:(id)a0 bizInfo:(id /* block */)a1 error:(id *)a2;
- (void)addFactor:(id)a0 numicValue:(float)a1 group:(id)a2 dataSource:(id)a3;
- (void)addFactor:(id)a0 dictValue:(id)a1 group:(id)a2 dataSource:(id)a3;
- (void)startSession:(id)a0 factorName:(id)a1 dataSource:(id)a2;
- (void)endSession:(id)a0 factorName:(id)a1 dataSource:(id)a2;
- (void)registerFactorGroup:(id)a0 bizInfo:(id /* block */)a1 callback:(id /* block */)a2;
- (void)registerCombineFactor:(id)a0 bizInfo:(id /* block */)a1 callback:(id /* block */)a2;
- (void)addFactorCollectConfigDict:(id)a0;
- (void)addFactorReportConfigDict:(id)a0;
- (void)updateAppSessionFactorsWithScene:(id)a0 configDict:(id)a1 extParams:(id)a2 isNew:(BOOL)a3 isForce:(BOOL)a4;
- (id)getFactorWithKey:(id)a0 ext:(id)a1 bizInfo:(id)a2 error:(id *)a3;
- (id)getFactorsWithConfigDict:(id)a0 extParams:(id)a1 bizInfo:(id /* block */)a2 error:(id *)a3;
- (id)getBizInfo:(id /* block */)a0;
- (id)getBizInfo:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
