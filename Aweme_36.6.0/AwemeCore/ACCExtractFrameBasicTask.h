@class NSString, ACCExtractCache, NSObject;
@protocol OS_dispatch_queue;

@interface ACCExtractFrameBasicTask : NSObject <ACCExtractFrameTaskProtocol>

@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL cancelled;
@property (copy, nonatomic) NSString *extractFolderPath;
@property (weak, nonatomic) ACCExtractCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearAllDiskCacheForMaterialIDs:(id)a0 extractPath:(id)a1;
+ (id)initialFrameTimesArrayWithDifinedCount:(unsigned long long)a0;

- (void)extractMaterialFrame:(id)a0 completion:(id /* block */)a1;
- (void)p_extractMaterialFrame:(id)a0 completion:(id /* block */)a1;
- (void)processImageMaterial:(id)a0 resultModel:(id)a1 folder:(id)a2;
- (void)processVideoMaterial:(id)a0 resultModel:(id)a1 folder:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
