@class NSString, UIView;
@protocol RxInjector;

@interface RTVFeedShareNarrowLayoutTransitionDelegate : NSObject <RTVXRLayoutTransitionDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) UIView *snapshotView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
