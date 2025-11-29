@class NSObject, NSString, HMDDebugRealConfig;
@protocol OS_dispatch_queue;

@interface HMDPerformanceUpload : NSObject <AWECloudCommandProtocol>

@property (retain, nonatomic) HMDDebugRealConfig *debugRealConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (void)load;

- (void)excuteCommand:(id)a0 completion:(id /* block */)a1;
- (void)refactorExecuteCommand:(id)a0 completion:(id /* block */)a1;
- (void)oldExecuteCommand:(id)a0 completion:(id /* block */)a1;
- (void)fetchPerformanceDataWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
