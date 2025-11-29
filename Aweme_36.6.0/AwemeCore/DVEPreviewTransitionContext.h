@class UIViewController;
@protocol DVEPreviewTransitionContextProvider;

@interface DVEPreviewTransitionContext : NSObject

@property (nonatomic) unsigned long long triggerDirection;
@property (retain, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) UIViewController *toViewController;
@property (retain, nonatomic) id fromContextProvider;
@property (retain, nonatomic) id toContextProvider;
@property (retain, nonatomic) id<DVEPreviewTransitionContextProvider> contextProvider;

- (void).cxx_destruct;

@end
