@class UIView;
@protocol AWENormalModeTabBarInnerView;

@interface AWENormalModeTabBarGeneralPlusButton : AWENormalModeTabBarPlusButton

@property (retain, nonatomic) UIView<AWENormalModeTabBarInnerView> *innerView;
@property (nonatomic) BOOL alreadyHighlighted;

+ (Class)aAWENormalModeTabBarPlusButtonCommonAdapterClass;
+ (id)button;

- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)aAWENormalModeTabBarPlusButtonCommonAdapter;
- (void)setImageForSpecialButtonState:(id)a0;
- (BOOL)shouldShowDynamicIcon;
- (id)dynamicDarkPlusIcon;
- (id)dynamicLightPlusIcon;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
