@class NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMFlexNodeCachePool : NSObject {
    struct vector<YGNode *, std::allocator<YGNode *>> { struct YGNode **__begin_; struct YGNode **__end_; struct YGNode **__cap_; } cache;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;

+ (id)p_shared;
+ (struct YGNode { } *)getYGNode;
+ (void)saveYGNode:(struct YGNode { } *)a0;
+ (void)clear;

- (struct YGNode { } *)p_getYGNode;
- (void)p_saveYGNode:(struct YGNode { } *)a0;
- (struct vector<YGNode *, std::allocator<YGNode *>> { struct YGNode **x0; struct YGNode **x1; struct YGNode **x2; })p_getChildren:(struct YGNode { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)p_clear;

@end
