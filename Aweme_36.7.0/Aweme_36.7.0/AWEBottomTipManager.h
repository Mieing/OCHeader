@class AWESupernatantView, AWEIMBottomTipsContainerView;

@interface AWEBottomTipManager : NSObject

@property (retain, nonatomic) AWESupernatantView *superNatant;
@property (retain, nonatomic) AWEIMBottomTipsContainerView *bottomBarContainer;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (BOOL)p_shouldUseTabBarHeightToLayoutWithView:(id)a0 topVC:(id)a1;
+ (id)sharedInstance;

- (id)aAWEPadModuleAdapter;
- (void)showToastTip:(id)a0 tipType:(unsigned long long)a1 shareModels:(id)a2 onTap:(id /* block */)a3 dismissed:(id /* block */)a4;
- (void)showNewStyleShareToastWithTitle:(id)a0 tips:(id)a1 shareModels:(id)a2 onTap:(id /* block */)a3 dismissed:(id /* block */)a4;
- (void)showToastTip:(id)a0 tipType:(unsigned long long)a1 shareModels:(id)a2 containerView:(id)a3 onTap:(id /* block */)a4 dismissed:(id /* block */)a5;
- (void)showNewStyleShareToastWithTitle:(id)a0 tips:(id)a1 shareModels:(id)a2 containerView:(id)a3 onTap:(id /* block */)a4 dismissed:(id /* block */)a5;
- (void)showNewStyleShareToastWithTitle:(id)a0 tips:(id)a1 shareModels:(id)a2 containerView:(id)a3 confirmTips:(id)a4 trackEvent:(id)a5 onConfirm:(id /* block */)a6 dismissed:(id /* block */)a7;
- (void)showNewStyleShareToastWithTitle:(id)a0 tips:(id)a1 shareModels:(id)a2 containerView:(id)a3 onTap:(id /* block */)a4 dismissed:(id /* block */)a5 willToastShowAction:(id /* block */)a6;
- (void)showNewStyleShareToastWithTitle:(id)a0 tips:(id)a1 shareModels:(id)a2 containerView:(id)a3 confirmTips:(id)a4 trackEvent:(id)a5 onConfirm:(id /* block */)a6 dismissed:(id /* block */)a7 willToastShowAction:(id /* block */)a8;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)__showNewStyleShareToastWithConfig:(id)a0;
- (void)__showNewStyleShareToastWithTitle:(id)a0 tips:(id)a1 shareModels:(id)a2 containerView:(id)a3 onTap:(id /* block */)a4 confirmTips:(id)a5 trackEvent:(id)a6 onConfirm:(id /* block */)a7 dismissed:(id /* block */)a8 willToastShowAction:(id /* block */)a9;
- (void)__showNewStyleShareToastWithTitle:(id)a0 tips:(id)a1 tagText:(id)a2 shareModels:(id)a3 containerView:(id)a4 onTap:(id /* block */)a5 confirmTips:(id)a6 trackEvent:(id)a7 onConfirm:(id /* block */)a8 dismissed:(id /* block */)a9 willToastShowAction:(id /* block */)a10;
- (BOOL)__hasUnnormalShareWithShareModels:(id)a0;
- (void)showNewStyleShareToastWithConfig:(id)a0;
- (void)showNewStyleShareToastWithTitle:(id)a0 tips:(id)a1 tagText:(id)a2 shareModels:(id)a3 containerView:(id)a4 onTap:(id /* block */)a5 dismissed:(id /* block */)a6 willToastShowAction:(id /* block */)a7;
- (void).cxx_destruct;
- (void)dismissTip;

@end
