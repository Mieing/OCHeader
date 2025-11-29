@class NSString;

@interface AWEUILoading : NSObject <AWEUILoadingSearchProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showLoadingAndPlaceholderOnView:(id)a0;
+ (id)showLoadingAndPlaceholderOnView:(id)a0 animated:(BOOL)a1;
+ (id)showLoadingOnView:(id)a0;
+ (void)dismissWindowLoadingWithAnimated:(BOOL)a0;
+ (id)showWindowLoadingWithTitle:(id)a0 animated:(BOOL)a1;
+ (void)dismissWindowLoading;
+ (id)showWindowLoading;
+ (id)showLoadingOnView:(id)a0 withTitle:(id)a1;
+ (id)showWindowLoadingWithTitle:(id)a0;
+ (id)showLoadingOnView:(id)a0 title:(id)a1 animated:(BOOL)a2;
+ (id)showTransparentLoadingAndDisableUserInteractionOnView:(id)a0;
+ (id)showWindowLoadingWithAnimated:(BOOL)a0;
+ (id)showLoadingOnView:(id)a0 animated:(BOOL)a1;
+ (id)basicMode_showLoadingAndPlaceholderOnView:(id)a0;
+ (id)showWindowLoadingWithDelegate:(id)a0;
+ (id)showWindowLoadingWithDelegate:(id)a0 afterDelay:(double)a1;
+ (id)showLoadingOnView:(id)a0 delegate:(id)a1 afterDelay:(double)a2;
+ (id)showLoadingOnView:(id)a0 delegate:(id)a1;
+ (id)showLoadingWithBackgroundOnView:(id)a0 delegate:(id)a1;
+ (id)showLoadingAndDisableUserInteractionOnView:(id)a0 delegate:(id)a1;
+ (id)showLoadingAndDisableUserInteractionOnView:(id)a0 delegate:(id)a1 afterDelay:(double)a2;
+ (id)showLoadingWithBackgroundOnView:(id)a0;
+ (id)showLoadingAndDisableUserInteractionOnView:(id)a0;
+ (id)showEcomSearchLoadingWithBackgroundOnView:(id)a0;
+ (void)dismissSearchLoading;
+ (id)showSearchLoadingWithBackground:(BOOL)a0;
+ (id)showSearchLoadingWithBackgroundOnView:(id)a0;
+ (id)blendedOptimize_showLoadingAndPlaceholderOnView:(id)a0;
+ (id)awe_offlineMode_showLoadingAndPlaceholderOnView:(id)a0;
+ (void)dismissSearchLoadingWithAnimated:(BOOL)a0;
+ (BOOL)isSearchLoadingShowing;


@end
