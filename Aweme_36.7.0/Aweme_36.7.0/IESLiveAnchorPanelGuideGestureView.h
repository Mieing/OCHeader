@class UIView, HTSEventContext, IESLiveCountTimer, NSString, IESLiveAnimatedImageView, NSNumber, UILabel;
@protocol IESLiveAnchorPanelGuideGestureViewDelegate;

@interface IESLiveAnchorPanelGuideGestureView : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveAnimatedImageView *swipeOpenGuideGestureView;
@property (retain, nonatomic) IESLiveAnimatedImageView *swipeCloseGuideGestureView;
@property (retain, nonatomic) UILabel *guideGestureLabel;
@property (nonatomic) BOOL isShowingGuideGesture;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) IESLiveCountTimer *startShowGuideGestureCountTimer;
@property (retain, nonatomic) IESLiveCountTimer *swipeOpenGestureCountTimer;
@property (retain, nonatomic) IESLiveCountTimer *swipeCloseGestureCountTimer;
@property (nonatomic) BOOL hasShowGuideOpenGesture;
@property (nonatomic) BOOL hasShowGuideCloseGesture;
@property (weak, nonatomic) id<IESLiveAnchorPanelGuideGestureViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupGuideGestureView;
- (void)cleanAllTimer;
- (void)clearGesture;
- (void)layoutGestureView;
- (void)handleSwipeDown;
- (void)handleSwipeUp;
- (void)clearGuideGestureTimer;
- (void)removeGuideGestureView;
- (void)startGuideGestureWithType:(long long)a0;
- (void)clearGuideGestureIfNeed:(long long)a0;
- (id)initWithRoomID:(id)a0 trackContext:(id)a1 diContext:(id)a2;
- (void)setupGuideGestureTimer:(long long)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)dealloc;

@end
