@class NSString, NSTimer, IESLiveInnerFeedSaaSADDataInjection, HTSLiveGuideView, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedSaaSController : NSObject <IESLiveInnerFeedDisplayAction, IESLiveSaaSGuideService>

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double beginWatchTime;
@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) IESLiveInnerFeedSaaSADDataInjection *adInjection;
@property (retain, nonatomic) HTSLiveGuideView *rollGuideView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)innerFeedWillAppear;
- (void)innerFeedWillDisappear;
- (void)innerFeedWillDisplayObject:(id)a0 atIndex:(long long)a1;
- (BOOL)showGlideTaskGuide;
- (void)dismissRoomDrawTaskGuide;
- (void)autoDismissDrawTaskGuideIfNeeded;
- (double)autoDismissDrawTaskGuideTime;
- (void)dismissSwipingRoomGuide;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addObserver;

@end
