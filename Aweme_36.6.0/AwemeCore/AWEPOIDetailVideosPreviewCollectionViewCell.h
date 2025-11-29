@class AWEPOIDetailPhotoBaseInfo, NSString, AWEPOIDetailPhotosPreviewBaseViewController, AWEPOIDetailVideosPreviewPauseIcon, UIView, AWEPOIDetailVideosPreviewProgressSlider;
@protocol IESVideoPlayerProtocol, AWEUILoadingViewProtocol;

@interface AWEPOIDetailVideosPreviewCollectionViewCell : UICollectionViewCell <IESVideoPlayerDelegate, AWEPOIDetailVideosPreviewBaseCellProtocol>

@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerWrapper;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) AWEPOIDetailVideosPreviewPauseIcon *pauseIcon;
@property (retain, nonatomic) AWEPOIDetailVideosPreviewProgressSlider *progressSlider;
@property (retain, nonatomic) UIView<AWEUILoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWEPOIDetailPhotoBaseInfo *model;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) BOOL isPauseByUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEPOIDetailPhotosPreviewBaseViewController *vc;

+ (double)playDurationWithProgress:(double)a0 totalDuration:(double)a1;
+ (double)progressWithPlayDuration:(double)a0 totalDuration:(double)a1;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)handleAppEnterForeground;
- (void)handleAppEnterBackground;
- (void)makeConstraints;
- (void)addPeriodicTimeObserver;
- (void)resetLoadingView;
- (void)playWithAnimation:(BOOL)a0;
- (void)handleWindowResignKey;
- (void)handleWindowBecomeKey;
- (void)updateWithPhotoInfo:(id)a0;
- (void)progressSlideChangeValue:(id)a0;
- (void)stopVideoPlay;
- (void)pauseWithAnimation:(BOOL)a0 isByUser:(BOOL)a1;
- (id)makeVideoPlayer;
- (id)makePauseIcon;
- (id)makeProgressSlider;
- (id)makePlayerWrapper;
- (void)progressSliderTouchEnded:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didAppear;
- (long long)playerState;
- (void)dealloc;
- (void)willDisappear;
- (void)setupUI;
- (void)showLoadingView;
- (void)didTap;

@end
