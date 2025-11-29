@class NSString;

@interface RxInjectorBlockProvider : NSObject <RxInjectorProvider>

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithBlock:(id /* block */)a0;

@end
