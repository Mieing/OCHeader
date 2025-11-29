@class AWERelatedVideoPlayNextMixVideoView;

@interface AWERelatedVideoPlayNextReminderController : AWEVideoPlayControlBaseController

@property (retain, nonatomic) AWERelatedVideoPlayNextMixVideoView *playNextMixVideoView;
@property (nonatomic) BOOL hasShownReminderView;

- (void)setHide:(BOOL)a0;
- (void)setAppear:(BOOL)a0;
- (void)bindEvent;
- (void)updatePlayerControlView;
- (void)showPlayingNextMixVideoTipsWithCompletion:(id /* block */)a0;
- (void)updateRemindViewLayout;
- (void)showReminderView:(id)a0 duration:(double)a1 buttonTitle:(id)a2 withCompletion:(id /* block */)a3;
- (void)trackClickReminderView:(BOOL)a0 clickReplay:(BOOL)a1;
- (BOOL)showMixVideoReminderView:(long long)a0 withCompletion:(id /* block */)a1;
- (void)trackShowReminderView;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
