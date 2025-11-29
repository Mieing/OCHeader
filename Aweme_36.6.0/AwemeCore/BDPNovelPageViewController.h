@protocol BDPNovelPageViewControllerDelegate;

@interface BDPNovelPageViewController : UIPageViewController

@property (weak, nonatomic) id<BDPNovelPageViewControllerDelegate> delegate;

+ (void)enableFixPageCurlCrash;

- (void)bdp_pageCurlAnimationDidStop:(id)a0 withState:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewDidLoad;
- (void)_setViewControllers:(id)a0 withCurlOfType:(long long)a1 fromLocation:(struct CGPoint { double x0; double x1; })a2 direction:(long long)a3 animated:(BOOL)a4 notifyDelegate:(BOOL)a5 completion:(id /* block */)a6;

@end
