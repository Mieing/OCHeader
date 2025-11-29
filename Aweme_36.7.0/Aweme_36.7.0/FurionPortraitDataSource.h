@class NSString;

@interface FurionPortraitDataSource : NSObject <FurionDataSourceProtocol>

@property (copy, nonatomic) id /* block */ dataSourceReadyCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceName;

- (id)doSetup;
- (id)getFactorsWithQueryGroups:(id)a0 bizInfo:(id)a1 error:(id *)a2;
- (id)getFactorWithKey:(id)a0 extParams:(id)a1 bizInfo:(id)a2 error:(id *)a3;
- (BOOL)dataSourceIsReady;
- (BOOL)addFactor:(id)a0 value:(id)a1 group:(id)a2;
- (BOOL)registrable;
- (id)getFactorsWithConfigDict:(id)a0 extParams:(id)a1 bizInfo:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)writable;

@end
