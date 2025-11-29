@class NSString, UIView;

@interface WCFinderCommonTipsView : UIView <MMUIViewControllerExt>

@property (retain, nonatomic) UIView *arrowView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *tipsContentView;
@property (weak, nonatomic) UIView *anchor;
@property (nonatomic) unsigned long long showPosition;
@property (nonatomic) double blankSize;
@property (nonatomic) double radius;
@property (nonatomic) struct CGSize { double width; double height; } backgroundMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeEdgeInset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) long long closeStyle;
@property (copy, nonatomic) id /* block */ onClose;
@property (nonatomic) unsigned long long position;
@property (nonatomic) BOOL weltDisplayAllowed;
@property (nonatomic) BOOL allowsPropagationEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTipsContentView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)setBackgroundColor:(id)a0;
- (id)backgroundColor;
- (void)updateArrowViewMask;
- (void)updateMask;
- (void)showOnView:(id)a0 offset:(struct CGVector { double x0; double x1; })a1;
- (void)dismiss;
- (void)_doHidden;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)MMUIViewControllerWillPushOrPresent:(id)a0;
- (void)MMUIViewControllerDidBeRemoved:(id)a0;
- (void).cxx_destruct;

@end
