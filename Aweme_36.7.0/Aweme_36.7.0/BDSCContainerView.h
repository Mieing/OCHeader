@class UIView, UILongPressGestureRecognizer, BDScreenCastPlayItem, UITapGestureRecognizer, BDSCProgressInfo, NSString, BDSCPlayControlMediaInfoModel, BDSCBaseViewController, BDByteScreenCastControlViewConfig;
@protocol BDSCControlView, BDSCDeviceProtocol, BDSCControlViewDelegate;

@interface BDSCContainerView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) BDByteScreenCastControlViewConfig *controlViewConfig;
@property (retain, nonatomic) id<BDSCDeviceProtocol> device;
@property (retain, nonatomic) BDSCProgressInfo *curProgressInfo;
@property (retain, nonatomic) BDScreenCastPlayItem *playItem;
@property (retain, nonatomic) BDSCPlayControlMediaInfoModel *curMediaInfo;
@property (nonatomic) unsigned long long castStatus;
@property (nonatomic) unsigned long long playStatus;
@property (retain, nonatomic) BDSCBaseViewController *presentStyleVC;
@property (retain, nonatomic) UILongPressGestureRecognizer *debugLongPressGesture;
@property (retain, nonatomic) UIView<BDSCControlView> *playerControlView;
@property (weak, nonatomic) id<BDSCControlViewDelegate> controlViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateControlViewWithConfig:(id)a0;
- (void)updatePlayStatus:(unsigned long long)a0;
- (void)updateProgressInfo:(id)a0;
- (void)updateCastStatus:(unsigned long long)a0;
- (void)showControlViewWithStatus:(unsigned long long)a0 animated:(BOOL)a1;
- (void)showControlViewFromFloatBall;
- (void)updatePlayControlMediaInfo:(id)a0;
- (void)updateAdditionActionOptions;
- (void)updateCastSpeedTitle:(id)a0;
- (void)buildSubviews;
- (void)dismissControlViewWithCompletion:(id /* block */)a0;
- (unsigned long long)controlViewShowingStyle;
- (void)updatePlayItem:(id)a0;
- (void)showControlViewWithConfig:(id)a0;
- (void)updateCurrentCastDevice:(id)a0;
- (void)buildTapGesture;
- (id)playerControlViewDidLoaded;
- (void)makeCastPlayerViewConstraints;
- (void)updateContainerViewConfigIfNeed;
- (void)updateControlViewStatus;
- (void)didDebugLongPressControlView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)clearCache;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleTapGesture:(id)a0;

@end
