@class POIMediaListCell, UIImageView, POIMediaListPageContext, NSString, UIViewController;
@protocol POIMediaListViewControllerProtocol;

@interface POIMediaListPlayerControllerExtension : NSObject <POIMediaListExtensionLifeCycleProtocol, POIMediaListPlayControllerProtocol>

@property (retain, nonatomic) UIImageView *pauseIcon;
@property (weak, nonatomic) POIMediaListCell *currentPlayingCell;
@property (nonatomic) BOOL pauseByOutsider;
@property (weak, nonatomic) POIMediaListPageContext *context;
@property (weak, nonatomic) UIViewController<POIMediaListViewControllerProtocol> *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldAutoPlay;

- (void)resetPauseIcon;
- (void)showPauseIcon;
- (void)hidePauseIcon;
- (void)handleAppEnterForeground;
- (void)handleAppEnterBackground;
- (void)onScrollDidEnd:(id)a0;
- (BOOL)playWithAnimation:(BOOL)a0;
- (BOOL)pauseWithAnimation:(BOOL)a0;
- (void)didEndReload;
- (void)initializeExtension;
- (void)handleWindowResignKey;
- (void)handleWindowBecomeKey;
- (void)tryAutoPause;
- (void)tryAutoPlay;
- (BOOL)switchPlayStatusWithAnimation:(BOOL)a0;
- (BOOL)playWithAnimation:(BOOL)a0 isByOutsider:(BOOL)a1;
- (BOOL)pauseWithAnimation:(BOOL)a0 isByOutsider:(BOOL)a1;
- (BOOL)switchPlayStatus;
- (void)scrollAlbumPlayerToIndex:(long long)a0;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
