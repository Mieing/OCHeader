@class NSPointerArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMComponentEventMultiCast : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (retain, nonatomic) NSPointerArray *targets;
@property (retain, nonatomic) NSMutableDictionary *signatures;
@property (readonly, nonatomic) NSMutableDictionary *selectorResponderDic;

- (BOOL)containsComponent:(id)a0;
- (void)p_prepareForSelector:(SEL)a0;
- (id)p_targetListForSelector:(SEL)a0;
- (id)p_signatureForSelector:(SEL)a0;
- (void)empty;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)addComponent:(id)a0;
- (void)removeComponent:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
