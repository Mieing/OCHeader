@class NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLiveScreencastMultiDeviceMessageDelegate : NSProxy

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSMutableDictionary *resultsDictionary;

+ (id)alloc;

- (void)removeDelete:(id)a0;
- (id)copyInvocation:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
