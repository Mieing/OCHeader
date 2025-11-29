@class NSDictionary, NSString;

@interface ACCStorageManager : NSObject <ACCStorageManagerProtocol>

@property (retain, nonatomic) NSDictionary *storageListMap;
@property (retain, nonatomic) NSDictionary *resourceMetricMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanByStrategy:(id)a0 completion:(id /* block */)a1;
- (id)storageWithId:(id)a0;
- (id)getRegisterPaths;
- (void)cleanByOverdue:(double)a0 completion:(id /* block */)a1;
- (id)resourceMetric:(id)a0 rPath:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (unsigned long long)totalSize;
- (void)clean;

@end
