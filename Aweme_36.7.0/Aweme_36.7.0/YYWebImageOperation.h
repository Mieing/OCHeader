@class NSOperation, NSString;
@protocol YYWebImageOperation;

@interface YYWebImageOperation : NSOperation <YYWebImageOperation>

@property (retain, nonatomic) NSOperation<YYWebImageOperation> *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)kernelClass;
+ (void)setKernelClass:(Class)a0;
+ (void)initialize;

- (id)initWithRequest:(id)a0 options:(unsigned long long)a1 cache:(id)a2 cacheKey:(id)a3 progress:(id /* block */)a4 transform:(id /* block */)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
