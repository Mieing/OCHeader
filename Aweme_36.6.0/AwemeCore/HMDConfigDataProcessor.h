@class NSString, NSObject;
@protocol OS_dispatch_queue, HMDConfigDataProcessDataSource, HMDConfigDataProcessDelegate;

@interface HMDConfigDataProcessor : NSObject <HMDConfigDataProcess>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *configFileUpdateQueue;
@property (weak, nonatomic) id<HMDConfigDataProcessDelegate> delegate;
@property (weak, nonatomic) id<HMDConfigDataProcessDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mergeCacheDict:(id)a0 withDict:(id)a1 mergeType:(long long)a2;
+ (id)_mutableCopyDictionary:(id)a0;

- (id)_mergeConfigDict:(id)a0 withAppID:(id)a1 appDict:(id)a2;
- (id)_processWithDictV5:(id)a0 forAppID:(id)a1;
- (id)_cacheConfigDictForAppID:(id)a0;
- (void)processResponseData:(id)a0;
- (void)processV5ResponseData:(id)a0;
- (void)updateConfigFile:(id)a0 forAppID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
