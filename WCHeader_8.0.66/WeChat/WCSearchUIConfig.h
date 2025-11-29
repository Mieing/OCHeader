@class UIColor, UIImage;

@interface WCSearchUIConfig : NSObject

@property (retain, nonatomic) UIColor *mainViewBackgroundColor;
@property (retain, nonatomic) UIColor *contentViewBackgroundColor;
@property (retain, nonatomic) UIColor *navBarBackgroundColor;
@property (retain, nonatomic) UIColor *searchBoxBackgroundColor;
@property (retain, nonatomic) UIColor *searchBarBackgroundColor;
@property (retain, nonatomic) UIImage *leftIconImage;
@property (nonatomic) double searchBarHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } searchBarLayoutMargin;
@property (nonatomic) double searchBarTextFontSize;
@property (nonatomic) unsigned long long useThemeMode;
@property (nonatomic) BOOL useHeroDismissAnimation;
@property (nonatomic) BOOL forbidDismissAnimation;
@property (nonatomic) BOOL forceUseDarkMode;
@property (nonatomic) BOOL useNoSnapshotTransition;
@property (nonatomic) BOOL useHeroNavPopAnimation;
@property (nonatomic) BOOL prefersStatusBarHidden;
@property (nonatomic) BOOL hideNavBar;
@property (nonatomic) double searchBarTransitionOffset;
@property (nonatomic) BOOL hideHalfPageNav;
@property (nonatomic) double halfPageHeightRatio;
@property (nonatomic) BOOL isHideBackgroupMask;

+ (id)defaultConfig;
+ (id)commonConfigFor:(id)a0;
+ (id)verticalSearchConfigFor:(id)a0;
+ (id)transparentConfigFor:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
