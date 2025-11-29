@class AWEAccountLoginPanelDismissAnimation, NSString, AWEAccountLoginPanelPresentAnimation;

@interface AWEAccountLoginPanelFullScreenAnimationDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) AWEAccountLoginPanelPresentAnimation *presentAnimation;
@property (retain, nonatomic) AWEAccountLoginPanelDismissAnimation *dismissAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
