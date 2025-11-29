@class NSArray, NSString, IESLiveRaceHighLightTipView, BDXBridgeEventSubscriber;

@interface IESLiveHighLightFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveHighLightRouter>

@property (retain, nonatomic) NSArray *highlights;
@property (nonatomic) long long currentTipShowAtIndex;
@property (retain, nonatomic) IESLiveRaceHighLightTipView *tipView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) BOOL previewTipsIsShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)unregisterSubscriber;
- (void)hideTipView;
- (id)getHighlightOfLocation:(double)a0;
- (BOOL)enableShowPreviewTips;
- (void)previewTipsIsHidden;
- (void)handleShowListCloseEvent:(id)a0;
- (void)addProgressHighLightNode;
- (void)onProgressSignClickAtIndex:(long long)a0 onView:(id)a1;
- (void)showTipViewAtIndex:(long long)a0 OnView:(id)a1 model:(id)a2 isAuto:(BOOL)a3;
- (void)seekToHighlight:(id)a0;
- (void)resetSeekControl;
- (void)didClickTipView:(id)a0;
- (void)seekToHighlightIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)messageReceived:(id)a0;
- (void)handleMessages:(id)a0;

@end
