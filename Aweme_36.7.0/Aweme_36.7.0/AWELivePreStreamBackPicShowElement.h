@class NSString, UIView;

@interface AWELivePreStreamBackPicShowElement : AWELiveBusinessBaseElement <AWELiveRoomMessage>

@property (weak, nonatomic) UIView *playerViceView;
@property (copy, nonatomic) NSString *audienceRoomId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateElement;

- (void)viewController_viewWillAppear;
- (void)streamPlayer_firstFrame;
- (void)audienceViewController_WillEnterLiveRoom:(id)a0 anchorID:(id)a1;
- (void)audienceViewController_WillLeaveLiveRoom:(id)a0;
- (void)audienceQuitBySwipeWithResultBlock:(id /* block */)a0;
- (void)iesLiveTrackEvent:(id)a0 params:(id)a1;
- (void)removeRoomBackOptimizeIfNeeded;
- (void)showRoomBackOptimizeIfNeeded;
- (BOOL)liveRoomBackOptimizeEnable;
- (BOOL)liveRoomBackShouldShowViceView;
- (BOOL)liveRoomModeEnable;
- (void)showPlayerViceViewIfNeeded;
- (void)removePlayerViceView;
- (void)trackLiveRoomBackShowType:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
