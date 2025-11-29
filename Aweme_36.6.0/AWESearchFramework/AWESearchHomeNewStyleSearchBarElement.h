@class UIView, NSString, UIImageView, NSDate, AWESSSearchBarElementConfig, UITapGestureRecognizer;
@protocol AWESSSearchBarElementContainerProtocol;

@interface AWESearchHomeNewStyleSearchBarElement : NSObject <AWESSSearchBarElementProtocol>

@property (retain, nonatomic) NSDate *lastClickTime;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) NSString *enableIconName;
@property (retain, nonatomic) AWESSSearchBarElementConfig *elementConfig;
@property (copy, nonatomic) NSString *unableIconName;
@property (copy, nonatomic) NSString *backgroundName;
@property (nonatomic) unsigned long long forceTheme;
@property (nonatomic) BOOL isEnable;
@property (retain, nonatomic) UIView<AWESSSearchBarElementContainerProtocol> *container;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *icon;
@property (copy, nonatomic) id /* block */ iconClick;
@property (copy, nonatomic) id /* block */ iconDoubleClick;
@property (copy, nonatomic) id /* block */ touchBegin;
@property (copy, nonatomic) id /* block */ touchEnd;
@property (copy, nonatomic) id /* block */ touchesMissBlock;
@property (copy, nonatomic) id /* block */ iconLongPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (BOOL)searchHomeNewStyleSearchBarElementRepeatClickFix;
- (void)switchToEnable:(BOOL)a0;
- (void)resetIconWithEnableIconName:(id)a0 unableIconName:(id)a1;
- (id)initWithEnableIconName:(id)a0 unableIconName:(id)a1 backgroundName:(id)a2 forceTheme:(unsigned long long)a3;
- (id)initWithEnableIconName:(id)a0 unableIconName:(id)a1 forceTheme:(unsigned long long)a2 backgroundName:(id)a3 config:(id)a4;
- (void)setBackgroundImageViewIfNeed;
- (BOOL)enablePressEndOpt;
- (BOOL)enableSearchSugPrePequest;
- (id)initWithEnableIconName:(id)a0 unableIconName:(id)a1 forceTheme:(unsigned long long)a2;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (id)iconName;
- (void)handleDoubleTap:(id)a0;
- (void)setupUI;
- (void)handleTap:(id)a0;
- (void)updateIcon;

@end
