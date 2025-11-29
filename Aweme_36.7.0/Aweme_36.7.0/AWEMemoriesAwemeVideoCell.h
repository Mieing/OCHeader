@class AWEMemoriesPlayerTileModel, ACCEditSingleVideoPlayControlView, NSString, UIViewController;
@protocol AWEPlayVideoViewControllerProtocol, AWEMemoriesAwemeVideoCellDelegate;

@interface AWEMemoriesAwemeVideoCell : UICollectionViewCell <ACCEditPlayControlViewDelegate, AWEPlayVideoDelegate>

@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *player;
@property (retain, nonatomic) ACCEditSingleVideoPlayControlView *playControlView;
@property (nonatomic) BOOL isPlayingBeforeDrag;
@property (nonatomic) double currentTotalDuration;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) AWEMemoriesPlayerTileModel *tileModel;
@property (weak, nonatomic) id<AWEMemoriesAwemeVideoCellDelegate> playerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)customTimerPeriodic:(id)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)playerWillStartNextLoop:(id)a0;
- (void)dragPlayTimeBegin:(double)a0;
- (void)dragPlayTimeEnd:(double)a0;
- (void)p_addChildViewController;
- (void)p_removeChildViewController;
- (void)p_setupPlayControlView;
- (void)updatePlayControlDurationIfNeeded:(double)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
