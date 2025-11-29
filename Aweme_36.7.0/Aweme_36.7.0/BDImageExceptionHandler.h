@class NSPointerArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDImageExceptionHandler : NSObject

@property (retain, nonatomic) NSPointerArray *records;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *recordsLock;

+ (id)sharedHandler;

- (void)registerRecord:(id)a0;
- (BOOL)isWeakNet;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end
