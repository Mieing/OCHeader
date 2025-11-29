@class NSString, AWETeenModeTabBarUpdateSelectedOptions;

@interface AWETeenModeTabBarControllerDelegateImpl : NSObject <AWETeenModeTabBarControllerDelegate>

@property (retain, nonatomic) AWETeenModeTabBarUpdateSelectedOptions *selectedOptions;
@property (nonatomic) BOOL enableLifeCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tabBarControllerViewWillAppear:(id)a0;
- (void)tabBarController:(id)a0 beforeViewDidAppear:(BOOL)a1;
- (void)tabBarControllerDidChangedFrame:(id)a0;
- (void)tabBarControllerUpdateSelectedTabIfNeeded:(id)a0 tabBarButton:(id)a1 options:(id)a2;
- (void)tabBarController:(id)a0 tabBarDidSetHidden:(BOOL)a1;
- (BOOL)shouldUpdateSelectedTabWithTabBarController:(id)a0 selectedType:(long long)a1 previousSelectedType:(long long)a2 selectedChannel:(id)a3 previousChannel:(id)a4 isByTap:(BOOL)a5;
- (void)didSelectedTabWithTabBarController:(id)a0 selectedType:(long long)a1 previousSelectedType:(long long)a2 selectedChannel:(id)a3 previousChannel:(id)a4 options:(id)a5;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)tabBarController:(id)a0 animationControllerForTransitionFromViewController:(id)a1 toViewController:(id)a2;

@end
