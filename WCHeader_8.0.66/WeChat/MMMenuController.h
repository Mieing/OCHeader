@class UIView, NSString, NSArray, MMMenuWindow, UIViewPropertyAnimator, UIColor, UIResponder, MMMenuContentView;

@interface MMMenuController : MMWindowViewController <MMMenuWindowDelegate, MMMenuContentViewDelegate, MMSceneDelegateExt>

@property (retain, nonatomic) MMMenuContentView *menuView;
@property (weak, nonatomic) MMMenuWindow *menuWindow;
@property (nonatomic) long long maxCountPerLine;
@property (nonatomic) long long menuStyle;
@property (retain, nonatomic) UIView *customHeaderView;
@property (nonatomic) double menuMinWidth;
@property (nonatomic) double menuItemInnerGap;
@property (nonatomic) double menuItemWidth;
@property (nonatomic) BOOL subMenuPushedAnimated;
@property (nonatomic) long long preferredDirection;
@property (nonatomic) BOOL blockBackgroundTouches;
@property (retain, nonatomic) UIViewPropertyAnimator *menuAnimator;
@property (nonatomic, getter=isMenuVisible) BOOL menuVisible;
@property (retain, nonatomic) NSArray *menuItemRows;
@property (weak, nonatomic) UIResponder *responder;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionRectInScreen;
@property (nonatomic) BOOL shouldCloseAtClicked;
@property (nonatomic) unsigned long long supportedOrienation;
@property (nonatomic) long long currOrientation;
@property (nonatomic) BOOL isKeyboardShowing;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) long long statusBarStyle;
@property (retain, nonatomic) id extraInfo;
@property (retain, nonatomic) NSString *targetSceneId;
@property (nonatomic) long long scene;
@property (readonly, nonatomic) NSArray *currentMenuItems;
@property (nonatomic) BOOL isCheckMenuWindowValid;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMenuController;
+ (double)displayChangeAnimateDuration;

- (id)init;
- (long long)preferredContainerBackgroundStyle;
- (void)setPreferredMenuDirection:(long long)a0;
- (void)setStayVisibleForOnce;
- (void)setMenuExtraInfo:(id)a0;
- (void)setMenuVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)setMenuVisible:(BOOL)a0 responder:(id)a1 animated:(BOOL)a2;
- (void)pushSubMenu:(id)a0 style:(long long)a1 animated:(BOOL)a2;
- (void)setMenuItems:(id)a0;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setMaxItemCountPerLine:(long long)a0;
- (void)setMenuControllerStyle:(long long)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)onDeviceOrienationChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidTransitionToNewSize;
- (void)startAnimatorWithAnimate:(id /* block */)a0 complete:(id /* block */)a1 allowAnimation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentMenuFrame;
- (void)onTouchAtNoneMenuArea;
- (void)onMenuItemSelected:(id)a0 itemView:(id)a1;
- (void)initMenuView;
- (void)updateMenuView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })safeScreenRect;
- (void)notifyMenuWillShow:(id)a0;
- (void)notifyMenuDidShow:(id)a0;
- (void)notifyMenuDidShowFailed:(id)a0;
- (void)notifyMenuWillHide:(id)a0;
- (void)notifyMenuDidHide:(id)a0;
- (void)notifyMenuFrameDidChange;
- (void)notifyMenuItemSelected:(id)a0;
- (long long)indexForMenuItem:(id)a0;
- (void)onKeyboardDidShow:(id)a0;
- (void)onKeyboardDidHide:(id)a0;
- (void)onMainSceneSizeChangedFrom:(struct CGSize { double x0; double x1; })a0 to:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
