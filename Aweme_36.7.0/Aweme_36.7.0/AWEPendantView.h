@class UIButton, NSArray, UIView;

@interface AWEPendantView : UIView

@property (nonatomic) double rightOffsetX;
@property (nonatomic) double topOffsetY;
@property (nonatomic) unsigned long long state;
@property (nonatomic, getter=isDismissed) BOOL dismissed;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isFolded) BOOL folded;
@property (nonatomic) BOOL shouldShowCloseButtonInFoldedPendant;
@property (nonatomic) BOOL shouldHideCloseButtonInExpandedPendant;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ stateChangeHandler;
@property (retain, nonatomic) NSArray *expandedFrameList;
@property (retain, nonatomic) NSArray *foldedFrameList;
@property (nonatomic) unsigned long long resourceType;

- (void)dismissButtonTapped;
- (void)contentTapped;
- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2;
- (void)playAnimationWithType:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dismissButtonWithAwe_width:(double)a0;
- (void)setupPadUI;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)setupNotifications;

@end
