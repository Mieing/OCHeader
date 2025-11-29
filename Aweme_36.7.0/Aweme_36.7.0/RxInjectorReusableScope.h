@class NSString;
@protocol RxInjectorProvider, NSLocking;

@interface RxInjectorReusableScope : NSObject <RxInjectorScope, RxInjectorProvider>

@property (readonly, nonatomic) id<NSLocking> lock;
@property (retain, nonatomic) id<RxInjectorProvider> source;
@property (weak, nonatomic) id instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scope;

@end
