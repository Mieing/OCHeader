@class NSString;
@protocol AWEReactPage;

@interface AWECommerceAnchorContanierViewController : AWECommerceAnchorTransitionViewController <AWEReactPage>

@property (readonly, nonatomic) id<AWEReactPage> reactPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reactID;
- (void)handleBridgeClose;
- (double)delayInTransition;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;

@end
