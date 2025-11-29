@class NSString;
@protocol BDPLynxRuntimeDispatcherDelegate;

@interface BDPLynxRuntimeLifecycleAdapter : NSObject <LynxRuntimeLifecycleListener>

@property (retain, nonatomic) id<BDPLynxRuntimeDispatcherDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
