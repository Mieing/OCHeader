@class HTSLive4LayerContainerView, NSString, UIView;
@protocol IESLiveTapAction;

@interface IESLiveAnchorViewContainerModule : IESLiveAnchorExecutionModule <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) HTSLive4LayerContainerView *containerView;
@property (retain, nonatomic) id<IESLiveTapAction> tapAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)subscribeMessages;
- (void)didClickContainerView:(id)a0;
- (void)handleLiveRoomDidClose;
- (void)loadTapGestureRecognizer;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setup;
- (void)setupOrientation;

@end
