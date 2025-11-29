@class DUXPopover, NSString, AWEHomePageCustomBubbleConfig, UIView;

@interface AWEHomePageBubble : NSObject <DUXPopoverDelegate, AWEHomePageBubbleProtocol>

@property (retain, nonatomic) DUXPopover *bubbleView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEHomePageCustomBubbleConfig *customConfig;
@property (nonatomic) BOOL needCover;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isDismissing;
@property (retain, nonatomic) UIView *targetView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetViewRect;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (void)addNotifications;
- (void)handleDeviceOrientationDidChange:(id)a0;
- (BOOL)showOnView:(id)a0 withDismissBlock:(id /* block */)a1;
- (void)setupBubbleViewWithBubbleModel:(id)a0 targetView:(id)a1 targetPoint:(struct CGPoint { double x0; double x1; })a2 position:(unsigned long long)a3;
- (void)optimizeHomepageBubbleHitAreaWithBubbleModel:(id)a0 bubbleView:(id)a1;
- (BOOL)showWithDismissBlock:(id /* block */)a0;
- (id)initWithBubbleModel:(id)a0 targetView:(id)a1 targetPoint:(struct CGPoint { double x0; double x1; })a2 position:(unsigned long long)a3;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)isValid;
- (void)setTheme:(BOOL)a0;
- (void)hide;
- (void)dealloc;
- (void)removeNotifications;

@end
