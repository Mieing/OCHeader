@class NSString, NSValueTransformer;

@interface AWEModelSonicParseContext : NSObject {
    NSString *currentKey;
    NSValueTransformer *currentValueTransformer;
    struct vector<void *, std::allocator<void *>> { void **__begin_; void **__end_; void **__cap_; } keyStack;
    struct vector<void *, std::allocator<void *>> { void **__begin_; void **__end_; void **__cap_; } valueStack;
    struct vector<void *, std::allocator<void *>> { void **__begin_; void **__end_; void **__cap_; } valueTransformerStack;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; int *__cap_; } valueTypeStack;
    struct vector<void *, std::allocator<void *>> { void **__begin_; void **__end_; void **__cap_; } containerClassStack;
}

@property (retain, nonatomic) Class rootModelClass;
@property (nonatomic) int currentValueType;
@property (retain, nonatomic) Class nextModelClass;

- (id)initWithRootModelClass:(Class)a0;
- (id)getRootModel;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
