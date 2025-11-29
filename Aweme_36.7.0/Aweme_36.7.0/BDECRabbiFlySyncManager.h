@class YYMemoryCache, BDECRabbiFlyDynamicSupervisor;

@interface BDECRabbiFlySyncManager : NSObject

@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) YYMemoryCache *viewCache;

- (struct CGSize { double x0; double x1; })getViewSizeWithModel:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
- (id)initWithSupervisor:(id)a0;
- (id)generateDynamicModelWithModel:(id)a0;
- (id)getViewWithModel:(id)a0 error:(id *)a1;
- (id)generateViewConfig;
- (void).cxx_destruct;

@end
