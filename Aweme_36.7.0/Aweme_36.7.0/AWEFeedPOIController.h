@class NSString;
@protocol AWEFeedTrackControllerProtocol;

@interface AWEFeedPOIController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedTrackControllerListenerProtocol>

@property (nonatomic) BOOL didEnterBackground;
@property (nonatomic) long long slideVideoCount;
@property (weak, nonatomic) id<AWEFeedTrackControllerProtocol> feedTrackController;
@property (nonatomic) double playTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)willEnterUserProfileViewController;
- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScrollEndWithActive;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (id)paramsForTrackEventType:(unsigned long long)a0 initialContextParams:(id)a1;
- (void)privacyAlertAgreed;
- (id)paramsForEnterPersonalDetail;
- (id)paramsForVideoClientShowWithInitialContextParams:(id)a0;
- (void)locationAlertShown;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appDidEnterBackground;

@end
