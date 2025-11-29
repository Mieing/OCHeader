@class AWEAccountLoginPanelPadPresentAnimation, AWEAccountLoginPanelPadDismissAnimation, NSString;

@interface AWEAccountLoginPanelPadAnimationDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) AWEAccountLoginPanelPadPresentAnimation *presentAnimation;
@property (retain, nonatomic) AWEAccountLoginPanelPadDismissAnimation *dismissAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
