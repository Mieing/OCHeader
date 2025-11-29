@class NSString;

@interface FurionIESFeatureCenterDataSource : NSObject <FurionDataSourceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceName;

- (id)doSetup;
- (id)getFactorsWithQueryGroups:(id)a0 bizInfo:(id)a1 error:(id *)a2;
- (id)getFactorWithKey:(id)a0 extParams:(id)a1 bizInfo:(id)a2 error:(id *)a3;
- (BOOL)dataSourceIsReady;
- (BOOL)registrable;
- (id)getFactorsWithConfigDict:(id)a0 extParams:(id)a1 bizInfo:(id)a2 error:(id *)a3;
- (void)setDataSourceReadyCompletion:(id /* block */)a0;
- (BOOL)writable;

@end
