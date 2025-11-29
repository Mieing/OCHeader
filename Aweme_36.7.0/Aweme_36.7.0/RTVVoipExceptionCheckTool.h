@class NSString, RTVVoipInvokeController, RTVVoipMonitor, RTVVoipManager;
@protocol RxInjector;

@interface RTVVoipExceptionCheckTool : NSObject <RTVVoipInvokeControllerObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipInvokeController *voipInvokeController;
@property (readonly, nonatomic) RTVVoipManager *voipManager;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
