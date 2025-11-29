@class NSString, RxWebAccessOperationModule;

@interface RxWebAccessModule : NSObject <RxInjectorModule>

@property (readonly, nonatomic) RxWebAccessOperationModule *operationModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
