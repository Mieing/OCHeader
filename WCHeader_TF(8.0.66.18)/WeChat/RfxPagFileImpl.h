@interface RfxPagFileImpl : NSObject {
    struct shared_ptr<rfx::RfxPagFile> { struct RfxPagFile *__ptr_; struct __shared_weak_count *__cntrl_; } _pagFile;
}

@property (nonatomic) struct shared_ptr<rfx::RfxPagFile> { struct RfxPagFile *x0; struct __shared_weak_count *x1; } pagFile;

+ (id)ToPagFile:(struct shared_ptr<rfx::RfxPagFile> { struct RfxPagFile *x0; struct __shared_weak_count *x1; })a0;
+ (id)Load:(id)a0;
+ (id)Load:(const void *)a0 size:(unsigned long long)a1;

- (id)initWithPagFile:(struct shared_ptr<rfx::RfxPagFile> { struct RfxPagFile *x0; struct __shared_weak_count *x1; })a0;
- (long long)duration;
- (long long)width;
- (long long)height;
- (id)audioBytes;
- (long long)audioStartTime;
- (void)setText:(id)a0 forAllTextLayersWithName:(id)a1;
- (void)resetTextForAllTextLayersWithName:(id)a0;
- (id)copyOriginal;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
