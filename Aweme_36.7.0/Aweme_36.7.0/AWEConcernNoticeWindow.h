@class UIButton, UIView;
@protocol AWEConcernNoticeDelegate, AWEConcernNoticeViewDelegate;

@interface AWEConcernNoticeWindow : AWEInnerNotificationWindow

@property (weak, nonatomic) id<AWEConcernNoticeDelegate> delegate;
@property (retain, nonatomic) UIView<AWEConcernNoticeViewDelegate> *showView;
@property (retain, nonatomic) UIButton *bgButton;
@property (retain, nonatomic) UIView *tertiaryView;
@property (nonatomic) BOOL dismissing;
@property (nonatomic) double lastPanY;
@property (nonatomic) double showTimestamp;
@property (nonatomic) BOOL autoDismiss;
@property (readonly, nonatomic) BOOL isMaskShowing;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)dismissWithTrack:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithShowView:(id)a0;
- (void)cancelAutoDismiss;
- (void)trackWithWindowShow;
- (void)__setUpUI;
- (void)showMask:(BOOL)a0 animated:(BOOL)a1;
- (void)touchDownAction;
- (void)dismissWithoutTrack;
- (BOOL)shouldBecomeKeyWindow;
- (void)handlePan:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;

@end
