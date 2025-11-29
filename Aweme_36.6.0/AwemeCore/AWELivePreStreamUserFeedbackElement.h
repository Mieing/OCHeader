@class AWELivePreStreamFeedbackBottomPanelView, NSString, AWELivePreStreamFeedbackViewModel;

@interface AWELivePreStreamUserFeedbackElement : AWELiveBaseElement <AWELivePreStreamEnterRoomDataProvider>

@property (retain, nonatomic) AWELivePreStreamFeedbackViewModel *feedbackViewModel;
@property (retain, nonatomic) AWELivePreStreamFeedbackBottomPanelView *feedbackBottomPanelView;
@property (readonly, nonatomic) long long indexPath;
@property (nonatomic) BOOL enteredRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (void)viewController_endDecelerating;
- (void)streamPlayer_firstFrame;
- (void)streamPlayer_stop;
- (void)streamPlayer_finish;
- (void)liveFeedBackBottomPanelViewChangeAlpha:(double)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
