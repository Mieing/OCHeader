@class NSString;
@protocol AWEHPChannelTabItemAbilityImpl;

@interface AWEHPChannelTabItemAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelTabItemAbility>

@property (weak, nonatomic) id<AWEHPChannelTabItemAbilityImpl> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonContentRectInWindow;
- (void)updateTabItemTitle:(id)a0 completion:(id /* block */)a1;
- (void)showHambTopTabLottieWithParams:(id)a0 showCallBack:(id /* block */)a1 hideCallBack:(id /* block */)a2;
- (void)showBottomTabSpecialEntry:(id)a0 needAnimate:(BOOL)a1;
- (void)hideBottomTabSpecialEntryNeedAnimate:(BOOL)a0;
- (void)updateAccessibilityHintText:(id)a0;
- (void)showBottomTabEntryRightIcon:(id)a0;
- (void)hideBottomTabEntryRightIcon;
- (void)updateTopTabItemIndicatorIconHidden:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateTopTabItemSelectedIndicatorWithParams:(id)a0 completion:(id /* block */)a1;
- (void)tabBarItemStartScaleAnimation;
- (void)updateBottomTabCustomCoverViewWithModel:(id)a0;
- (void)showTopTabImageWithModel:(id)a0 completion:(id /* block */)a1;
- (void)cancelTopTabImageWithCompletion:(id /* block */)a0;
- (void)showBottomTabItemImage:(id)a0 withAnimateType:(long long)a1 withCompletion:(id /* block */)a2;
- (void)cancelBottomTabItemImageWithCompletion:(id /* block */)a0;
- (void)removeAllResourcesIfNeedBeforeChannelUnload;
- (void)updateBottomTabItem:(id)a0;
- (void)showBottomTabItemActionPopoverWithActions:(id)a0 preferDarkTheme:(BOOL)a1 showCallback:(id /* block */)a2;
- (void)updateBottomTabLeftElementButtonViewModels:(id)a0;
- (void)updateBottomTabRightElementButtonViewModels:(id)a0;
- (void)updateBottomTabCompactBGColorFill:(BOOL)a0;
- (void)p_updateBottomTabItemRightIcon:(id)a0;
- (void)p_updateBottomTabSpecialEntry:(id)a0 needAnimate:(BOOL)a1;
- (void)p_showHambTopTabLottieWithParams:(id)a0 showCallBack:(id /* block */)a1 hideCallBack:(id /* block */)a2;
- (void)p_realShowHambTopTabLottieWithTask:(id)a0 showCallBack:(id /* block */)a1 hideCallBack:(id /* block */)a2;
- (void)p_showTopTabItemLottieWithTask:(id)a0 withItemIndicatorColor:(id)a1 showCallBack:(id /* block */)a2 hideCallBack:(id /* block */)a3;
- (void)p_updateTopTabLottieWithTask:(id)a0 withItemIndicatorColor:(id)a1 withReUseComponent:(BOOL)a2;
- (void)p_cancelTopTabLottieWithCallBack:(id /* block */)a0 isContainerHide:(BOOL)a1;
- (void)p_showTopTabImageWithModel:(id)a0 completion:(id /* block */)a1;
- (void)p_cancelTopTabImageWithCompletion:(id /* block */)a0;
- (void)updateAccessibilityValue:(id)a0;
- (void)updateTopTabItemIndicatorIconWithParams:(id)a0 completion:(id /* block */)a1;
- (void)updateTopTabItemIndicatorIconRotation:(BOOL)a0 completion:(id /* block */)a1;
- (void)cancelTopTabLottieWithCallBack:(id /* block */)a0;
- (void).cxx_destruct;

@end
