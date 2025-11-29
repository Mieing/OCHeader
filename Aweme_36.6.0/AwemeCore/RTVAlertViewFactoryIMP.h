@class NSString;
@protocol RxInjector;

@interface RTVAlertViewFactoryIMP : NSObject <RTVAlertViewFactory>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)alert;

@end
