@class NSString, NSObject;

@interface HMDKVOPair : NSObject

@property (readonly, weak, nonatomic) NSObject *HMDObserver;
@property (readonly, nonatomic) Class HMDObserverClass;
@property (readonly, nonatomic) void *HMDObserverPtr;
@property (readonly, nonatomic) unsigned long long HMDObserverSize;
@property (readonly, copy, nonatomic) NSString *HMDKeyPath;
@property (readonly, nonatomic) unsigned long long HMDOption;
@property (readonly, nonatomic) void *HMDContext;
@property (readonly, nonatomic, getter=isActived) BOOL actived;
@property (readonly, nonatomic, getter=isCrashed) BOOL crashed;

- (id)initWithObserver:(id)a0 keypath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)activeWithObservee:(id)a0;
- (void)deactiveWithObservee:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
