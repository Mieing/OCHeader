@class UILabel, IESLiveRecordCleaner, IESLiveGCDTimer, UIVisualEffectView, NSObject, UIButton, UIView, CAGradientLayer, NSString, HTSLiveScreenRecordFunctionView, IESLiveScreenRecordAudienceProfileView, IESLiveScreenRecordWidget, HTSLiveAmazingBackgroundView;
@protocol OS_dispatch_queue, IESLiveScreenRecordViewDelegate;

@interface IESLiveScreenRecordView : UIView <IESLiveInteractAction, IESLiveScreenRecordViewProvider>

@property (nonatomic) double minTime;
@property (nonatomic) double maxTime;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) UIView *backgroundMask;
@property (retain, nonatomic) IESLiveScreenRecordAudienceProfileView *profileView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *recordButton;
@property (retain, nonatomic) HTSLiveScreenRecordFunctionView *cancelView;
@property (retain, nonatomic) HTSLiveScreenRecordFunctionView *clearScreenView;
@property (retain, nonatomic) HTSLiveScreenRecordFunctionView *showScreenView;
@property (retain, nonatomic) UIView *alertContainer;
@property (retain, nonatomic) IESLiveRecordCleaner *cleaner;
@property (retain, nonatomic) IESLiveScreenRecordWidget *screenRecordWidget;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL isPannelShowing;
@property (nonatomic) BOOL isInRecording;
@property (nonatomic) BOOL isAnchor;
@property (weak, nonatomic) id<IESLiveScreenRecordViewDelegate> delegate;
@property (nonatomic) BOOL isLongPressMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isShowing;

- (void)didSetAttachingDIContext;
- (void)setDidClearStatus:(BOOL)a0;
- (void)remakeConstraints;
- (void)didJoinRTCChannelByAudienceWithScene:(unsigned long long)a0;
- (void)bindMinTime:(double)a0 maxTime:(double)a1;
- (void)showInView:(id)a0 dismissHandler:(id /* block */)a1;
- (void)stoppedByError:(id)a0;
- (void)renderUIMode:(BOOL)a0;
- (void)dismissPannel;
- (void)emptyAreaTapped:(id)a0;
- (BOOL)enableNewWarterMark;
- (void)recordFinished:(double)a0 isOver:(BOOL)a1;
- (void)makeProfileViewConstrains;
- (void)didClickedClearScreenActions;
- (void)setLandscapeBackgroundViewStyle;
- (void)setPortraitBackgroundViewStyle;
- (void)didClickedRecordActions;
- (void)didClickedStopActions;
- (void)didClickedShowScreenActions;
- (BOOL)isDefaultClean;
- (void)didClickedCancelActions;
- (void)stopTimer;
- (void)dismiss;
- (void).cxx_destruct;
- (void)startTimer;
- (void)stop;
- (void)stopRecording;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
