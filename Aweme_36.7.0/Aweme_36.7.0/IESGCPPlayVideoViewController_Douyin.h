@class AWEAwemeModel, UIView, AWEGCPDetailAlbumBadgeView, AWEGCPAwemeModel, NSString, UIViewController, AWEGCPPlayerInteractionView, AWEGCPAlbumProgressContainer;
@protocol AWEPlayVideoViewControllerProtocol, AFDSlidesViewProtocol;

@interface IESGCPPlayVideoViewController_Douyin : UIViewController <AWEModernFullscreenTransitionOuterContextProvider, AFDSlidesViewActionDelegate, AWEPlayVideoDelegate, AWEPlayVideoViewControllerStatusDelegate, IESVideoPlayerDelegate, AWEGCPPlayVideoViewControllerProtocol>

@property (retain, nonatomic) AWEGCPAwemeModel *gameAwemeModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *playVideoViewController;
@property (retain, nonatomic) UIView<AFDSlidesViewProtocol> *imageSliderView;
@property (nonatomic) long long imageSliderLoopTimes;
@property (nonatomic) long long currentIndex;
@property (nonatomic) double totalPlayDuration;
@property (nonatomic) BOOL needUpdatePlayer;
@property (retain, nonatomic) AWEGCPPlayerInteractionView *interactionView;
@property (retain, nonatomic) AWEGCPAlbumProgressContainer *albumProgressContainerView;
@property (retain, nonatomic) AWEGCPDetailAlbumBadgeView *albumBadge;
@property (retain, nonatomic) UIView *albumGradientView;
@property (nonatomic) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ trackTotalPlayTime;
@property (copy, nonatomic) id /* block */ speakerButtonDidClicked;
@property (copy, nonatomic) NSString *referString;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)player:(id)a0 updateTotalPlayDuration:(double)a1;
- (void)playerDidStopped:(id)a0;
- (id)modernTransitionContext;
- (void)progressDidUpdateWithIndex:(long long)a0 progress:(double)a1 duration:(double)a2 animated:(BOOL)a3;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (BOOL)enableAlbumPlayer;
- (void)updateAWEGCPAwemeModel:(id)a0;
- (struct CGSize { double x0; double x1; })getSizeWithAWEGCPAwemeModel:(id)a0 maxWidth:(double)a1;
- (void)addTrackParamsWithLogExtraDict:(id)a0 referString:(id)a1;
- (void)updateBottomUIWithModel:(id)a0;
- (struct CGSize { double x0; double x1; })calculateAlbumContainerSizeWithAlbumImages:(id)a0;
- (void).cxx_destruct;
- (BOOL)play;
- (void)pause;
- (void)viewDidLayoutSubviews;
- (void)stop;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
