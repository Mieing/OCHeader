@class UIView, NSString, UIPanGestureRecognizer;
@protocol IESLivePlaybackPopupDelegate;

@interface IESLivePlaybackPopupPanServiceImp : NSObject <IESLivePlaybackPopupPanService>

@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) double backgroundBottom;
@property (weak, nonatomic) id<IESLivePlaybackPopupDelegate> delegate;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL viewDidReachTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addFollowGestureInView:(id)a0 backgroundBottom:(double)a1 completion:(id /* block */)a2;
- (void)addFollowGestureInView:(id)a0 backgroundBottom:(double)a1 delegate:(id)a2 completion:(id /* block */)a3;
- (BOOL)isValidView:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)pan:(id)a0;
- (void)setPanEnabled:(BOOL)a0;

@end
