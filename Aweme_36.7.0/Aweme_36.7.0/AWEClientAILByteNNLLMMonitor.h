@class NSString;

@interface AWEClientAILByteNNLLMMonitor : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *engineType;
@property (nonatomic) unsigned long long appMemBytesOnLoadStart;
@property (nonatomic) struct { unsigned long long appUsedGPUMemory; long long globalAllocGPUMemory; long long globalInuseGPUMemory; } appGPUMemBytesOnLoadStart;
@property (nonatomic) unsigned long long appMemBytesOnForwardStart;
@property (nonatomic) struct { unsigned long long appUsedGPUMemory; long long globalAllocGPUMemory; long long globalInuseGPUMemory; } appGPUMemBytesOnForwardStart;
@property (copy, nonatomic) NSString *currentGroupName;

- (id)initWithModelName:(id)a0 engineType:(id)a1;
- (void)recordDownloadError:(id)a0 resourceType:(id)a1;
- (void)recordDownloadSuccessWithModelURLString:(id)a0 resourceType:(id)a1;
- (void)recordLoadStart;
- (void)recordLoadSuccess:(id)a0;
- (void)recordLoadError:(id)a0 extraParams:(id)a1;
- (void)recordForwardStart;
- (void)recordForwardError:(id)a0 extraParams:(id)a1;
- (void)recordForwardSuccess:(id)a0 extraParams:(id)a1;
- (void)reportWithEvent:(id)a0 success:(BOOL)a1 error:(id)a2 params:(id)a3;
- (id)getPerformanceInfoWithStartAppMemBytes:(unsigned long long)a0 gpuMemBytes:(struct { unsigned long long x0; long long x1; long long x2; })a1;
- (void)reportForwardEventWithSuccess:(BOOL)a0 error:(id)a1 params:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
