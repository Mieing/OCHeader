@class NSArray, ILAConfig, NSDictionary, NSFileManager, NSObject;
@protocol OS_dispatch_queue, ILAScanModelProtocol;

@interface ILAScanModelManager : NSObject {
    struct shared_ptr<ILASDK::ModelDelegate> { struct ModelDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } scanManager;
}

@property (retain, nonatomic) ILAConfig *config;
@property (nonatomic) unsigned long long modelState;
@property (copy, nonatomic) NSArray *modelNames;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) NSDictionary *modelPathMapping;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downModelQueue;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (weak, nonatomic) id<ILAScanModelProtocol> delegate;

- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })updateModelNames;
- (void)preloadModels:(id)a0 modelNames:(id)a1;
- (int)verifyIntegrity;
- (void)configEffect;
- (id)initWithConfig:(id)a0 prepareModelCompletion:(id /* block */)a1;
- (struct shared_ptr<ILASDK::ModelDelegate> { struct ModelDelegate *x0; struct __shared_weak_count *x1; })scanModelManager;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct vector<std::shared_ptr<ILASDK::Model>, std::allocator<std::shared_ptr<ILASDK::Model>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<ILASDK::Model> *, std::allocator<std::shared_ptr<ILASDK::Model>>> { void *x0; } x2; })modelInfos;

@end
