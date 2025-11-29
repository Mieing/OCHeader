@class WCTDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface NPVEFeatureDBManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (retain, nonatomic) WCTDatabase *dataBase;

+ (void)deleteBimResultWithExpirationHours:(long long)a0 completion:(id /* block */)a1;
+ (id)dbFilePath;

- (void)getBimResultWithMaterialIDs:(id)a0 completion:(id /* block */)a1;
- (void)updateBimResultWithArr:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)prepare;

@end
