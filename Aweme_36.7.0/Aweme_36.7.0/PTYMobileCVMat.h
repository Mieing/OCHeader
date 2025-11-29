@class NSDictionary;

@interface PTYMobileCVMat : PTYCls

@property (nonatomic) void *pixelBufferData;
@property (nonatomic) void *mat;
@property (nonatomic) BOOL autoDeleteMat;
@property (copy, nonatomic) NSDictionary *customInfo;

- (id)initWithCoreObject:(const void *)a0;
- (struct shared_ptr<pitaya::PTYClass> { struct PTYClass *x0; struct __shared_weak_count *x1; })coreObject;
- (id)initWithImage:(id)a0 hasAlpha:(BOOL)a1;
- (id)imageFromMat;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithCVPixelBufferRef:(struct __CVBuffer { } *)a0;

@end
