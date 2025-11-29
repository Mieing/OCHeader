@class NSString, AWEPadSplitViewServiceImpl;

@interface AWEPadSplitViewTransitionContext : NSObject <AWEPadSplitViewTransitionContext>

@property (weak, nonatomic) AWEPadSplitViewServiceImpl *service;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateSecondaryViewOffsetX:(double)a0;
- (void)cancelTransition;
- (void).cxx_destruct;
- (id)initWithService:(id)a0;
- (void)finishTransition;

@end
