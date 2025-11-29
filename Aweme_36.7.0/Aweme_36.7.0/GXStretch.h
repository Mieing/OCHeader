@class NSObject;
@protocol OS_dispatch_semaphore;

@interface GXStretch : NSObject {
    void *_stretchptr;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

+ (id)stretch;

- (void *)creatNode:(void *)a0;
- (void)replaceChild:(void *)a0 atIndex:(long long)a1 forNode:(void *)a2;
- (void)addChild:(void *)a0 forNode:(void *)a1;
- (void)removeChildAtIndex:(long long)a0 forNode:(void *)a1;
- (void)removeChild:(void *)a0 forNode:(void *)a1;
- (id)computeLayout:(void *)a0 witSize:(struct { float x0; float x1; })a1;
- (void)setStyle:(void *)a0 forNode:(void *)a1;
- (void)markDirty:(void *)a0;
- (BOOL)isDirty:(void *)a0;
- (void)freeNode:(void *)a0;
- (void).cxx_destruct;
- (id)init;

@end
