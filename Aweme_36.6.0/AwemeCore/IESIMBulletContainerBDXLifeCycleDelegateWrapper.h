@class NSString;
@protocol BDXContainerLifecycleProtocol;

@interface IESIMBulletContainerBDXLifeCycleDelegateWrapper : NSObject <BDXContainerLifecycleProtocol>

@property (weak, nonatomic) id<BDXContainerLifecycleProtocol> lifeCycleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;

@end
