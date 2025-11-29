@class NSString;
@protocol RxInjectorProvider, NSLocking;

@interface RxInjectorLazyScope : NSObject <RxInjectorScope, RxInjectorProvider>

@property (readonly, nonatomic) id<NSLocking> lock;
@property (readonly, nonatomic) id<RxInjectorProvider> source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scope;

@end
