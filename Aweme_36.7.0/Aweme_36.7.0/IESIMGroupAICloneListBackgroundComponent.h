@class UIImageView;

@interface IESIMGroupAICloneListBackgroundComponent : AWEIMComponentBase

@property (retain, nonatomic) UIImageView *bgView;

+ (id)p_bgImageConfigDict;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)iesim_themeReload:(id)a0;
- (void)p_configBackgroundViewIfNeeded;
- (id)p_createBGViewIfNeeded;
- (void).cxx_destruct;

@end
