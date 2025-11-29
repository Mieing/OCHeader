@class NSString;

@interface ACCCutSameVideoCompressor : NSObject <ACCCutSameVideoCompressorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)compressAsset:(id)a0 withConfig:(id)a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)cancelAllTasks;

@end
