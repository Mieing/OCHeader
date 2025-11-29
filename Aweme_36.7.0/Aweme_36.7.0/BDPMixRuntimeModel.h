@class NSString, NSRunLoop;
@protocol LynxRuntimeLifecycleListener;

@interface BDPMixRuntimeModel : BDPAnnieBackgroundRuntimeModel <LynxRuntimeLifecycleListener> {
    void *_napiEnv;
    NSRunLoop *_runLoop;
}

@property (retain, nonatomic) id<LynxRuntimeLifecycleListener> real_listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
