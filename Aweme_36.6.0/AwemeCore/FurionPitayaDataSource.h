@class NSString, NSMutableArray;

@interface FurionPitayaDataSource : NSObject <FurionDataSourceProtocol>

@property (retain, nonatomic) NSMutableArray *cachedGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceName;

- (id)doSetup;
- (id)getFactorsWithQueryGroups:(id)a0 bizInfo:(id)a1 error:(id *)a2;
- (void)registerFactorGroup:(id)a0 bizInfo:(id)a1 callback:(id /* block */)a2;
- (id)getFactorWithKey:(id)a0 extParams:(id)a1 bizInfo:(id)a2 error:(id *)a3;
- (BOOL)dataSourceIsReady;
- (BOOL)addFactor:(id)a0 value:(id)a1 group:(id)a2;
- (void)startSession:(id)a0 factorName:(id)a1;
- (void)endSession:(id)a0 factorName:(id)a1;
- (BOOL)registrable;
- (id)getFactorsWithConfigDict:(id)a0 extParams:(id)a1 bizInfo:(id)a2 error:(id *)a3;
- (void)pitayaReady:(id)a0;
- (id)ptyGroupsFromFurionGroups:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)writable;

@end
