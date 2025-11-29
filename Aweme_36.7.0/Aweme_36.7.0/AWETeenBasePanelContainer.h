@class CAGradientLayer, NSString, AWETeenPanelContainerConfig, UIView, UIPanGestureRecognizer, UIButton;
@protocol AWETeenPanelPresentPortocol;

@interface AWETeenBasePanelContainer : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWETeenPanelContainerConfig *config;
@property (nonatomic) BOOL didShowPanel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *listContainer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *backgroudView;
@property (nonatomic) double panelHeight;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) double showHeight;
@property (weak, nonatomic) id<AWETeenPanelPresentPortocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)base_setupUI;
- (void)base_addGestureRecognizer;
- (double)base_currentShowHeight;
- (void)base_addBackgroudView;
- (void)base_onSingleTap;
- (void)base_onPanGesture:(id)a0;
- (void)base_presentByPanGesture;
- (void)base_dismissByPanGesture;
- (void)presentWithPanelHeight:(double)a0 showHeight:(double)a1;
- (void)showBottomGradientLayer:(BOOL)a0;
- (void)updateShowHeight:(double)a0;
- (void)updateUIWhileRotate;
- (void)dismiss;
- (void).cxx_destruct;
- (void)present;
- (void)willDismiss;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)didDismiss;
- (void)willPresent;
- (id)initWithConfig:(id)a0;
- (void)didPresent;

@end
