@class NSString;

@interface LynxAsyncLayoutListener : NSObject <LynxViewLifecycle>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxViewOnTasmFinishByNative:(id)a0;
- (void)lynxView:(id)a0 didRecieveError:(id)a1;
- (void).cxx_destruct;

@end
