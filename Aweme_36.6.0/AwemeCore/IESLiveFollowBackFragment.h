@class IESLiveFollowBackPanelView, NSString;

@interface IESLiveFollowBackFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveFollowBackPanelViewDelegate>

@property (retain, nonatomic) IESLiveFollowBackPanelView *panelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (id)transformFollowStrongGuideToIESLiveFollowBackPanelViewModel:(id)a0;

- (void)componentBindService;
- (void)componentUnmount;
- (void)cancelDelayDimiss;
- (void)trackPanelViewShowWithUser:(id)a0 userType:(unsigned long long)a1;
- (void)dismissFollowGuideWithDelay:(double)a0;
- (void)dismissFollowGuide;
- (BOOL)checkShownGuideLimitaion;
- (void)showFollowGuideMessageWithContent:(id)a0;
- (id)transformUserTypeToTrackString:(unsigned long long)a0;
- (void)onReceivedFollowStrongGuideMessage:(id)a0;
- (id)trackFollowBackWithRoom:(id)a0 user:(id)a1 userType:(unsigned long long)a2;
- (void)panelViewDidClickButton:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)currentScene;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
