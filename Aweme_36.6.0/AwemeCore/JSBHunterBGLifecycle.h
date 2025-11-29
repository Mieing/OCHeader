@class NSString;

@interface JSBHunterBGLifecycle : NSObject <HunterLynxBackgroundRuntimeLifecycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)runtime:(id)a0 OnReady:(id)a1;
- (void)runtime:(id)a0 didRecieveError:(id)a1;

@end
