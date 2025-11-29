@class NSString;
@protocol RxInjector;

@interface RTVFeedShareFullScreenLayoutTransitionDelegate : NSObject <RTVXRLayoutTransitionDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
