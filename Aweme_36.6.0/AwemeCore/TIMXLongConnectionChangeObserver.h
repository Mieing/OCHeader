@class NSString, TIMXSDKInstance, TIMXMulticastDelegate;

@interface TIMXLongConnectionChangeObserver : NSObject <TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXMulticastDelegate *multicastDelegate;
@property (retain, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (id)addWeakObserver:(id)a0;
- (void)removeObserverWithIdentifier:(id)a0;
- (void)onLongConnectionStateChange:(unsigned long long)a0;
- (void)setUp;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRootObject:(id)a0;

@end
