@class AWEGrouponResourceOfPendantModel, NSString, UIView, NSMutableArray;
@protocol AWENearbyGestureTransLynxContainerEventDelegate, BDXViewContainerProtocol;

@interface AWEGrouponPassThroughView : UIView <BDXContainerLifecycleProtocol, AWEGrouponFeedEventMessage>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (retain, nonatomic) AWEGrouponResourceOfPendantModel *pendantModel;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (weak, nonatomic) id<AWENearbyGestureTransLynxContainerEventDelegate> passThroughEventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configWithPendantMetaList:(id)a0 viewController:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)sendEvent:(id)a0 params:(id)a1;
- (id)currentTimeStr;
- (void)__subscribeEvent;
- (void)nearbyC2FeedDidScrollWithContext:(id)a0;
- (void)nearbyC2FeedScrollViewWillBeginDraggingWithContext:(id)a0;
- (void)nearbyC2FeedScrollViewDidEndDraggingWithContext:(id)a0;
- (void)nearbyC2FeedScrollViewDidEndDeceleratingWithContext:(id)a0;
- (void)__unSubscriberEvent;
- (void)loadTemplate;
- (void)didReceiveEventMoveToPosition:(double)a0;
- (void)didReceiveEventCloseContainer;
- (void)didReceiveEventPendantPositionInfoWithHeight:(double)a0 bottomSpace:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
