@class NSString, UIView;
@protocol IESLiveSubscription, IESLiveReturnBackRouter;

@interface IESLiveReturnBackFragment : IESLiveRoomComponent <HTSLiveAudienceActions>

@property (retain, nonatomic) id<IESLiveSubscription> dispose;
@property (weak, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) id<IESLiveReturnBackRouter> returnRouter;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) int returnBackStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)liveWillFinished;
- (void)handleOrientationChanged:(long long)a0;
- (void)layoutIndicatorView:(id)a0;
- (void)renderIndicatorView;
- (void).cxx_destruct;

@end
