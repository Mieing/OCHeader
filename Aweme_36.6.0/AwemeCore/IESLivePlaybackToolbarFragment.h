@class MASConstraint, NSString, UIImageView, IESLivePlaybackToolbarPlaceholder, UIView, NSObject;
@protocol OS_dispatch_queue, HTSLiveToolbar;

@interface IESLivePlaybackToolbarFragment : IESLivePlaybackComponent <IESLivePlaybackToolbarProvider, IESLivePlaybackAutoRotateAction, IESVSVideoPlayAction, IESLivePlaybackMultiTabAction, IESLivePlaybackComponentLifeCycle>

@property (retain, nonatomic) UIView<HTSLiveToolbar> *normalTopToolbar;
@property (retain, nonatomic) UIView<HTSLiveToolbar> *topToolbar;
@property (retain, nonatomic) UIView<HTSLiveToolbar> *bottomToolbar;
@property (retain, nonatomic) UIView<HTSLiveToolbar> *leftBottomToolbar;
@property (retain, nonatomic) IESLivePlaybackToolbarPlaceholder *toolbarPlaceholder;
@property (retain, nonatomic) UIView *toolbarBg;
@property (retain, nonatomic) UIImageView *toolbarBackgroundImageView;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *covertImageColorQueue;
@property (nonatomic) double startloadTime;
@property (nonatomic) BOOL hasTrackShow;
@property (retain, nonatomic) MASConstraint *heightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)updatePlaceholder;
- (BOOL)isVerticalStream;
- (void)showBottomToolbarIfNeed;
- (void)multiTabWillShow;
- (void)componentWillMount;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)streamChangedWithEpisode:(id)a0;
- (BOOL)usePadNewStyle;
- (void)addToolbarBgIfNeed;
- (void)updateAllToolbar;
- (void)hideBottomToolBar;
- (void)updateTopToolbar;
- (void)updateBottomToolbar;
- (void)updateLeftBottomToolbar;
- (void)p_updatePlaceHolderInVertical;
- (void)updateToolbarBgColor:(id)a0;
- (void)reloadAllToolbarWhenScreenChange;
- (void)p_loadImageColor:(id)a0;
- (void)p_loadToolbarImage:(id)a0;
- (void)showBottomToolBar;
- (void)trackToorbarLoadCompleted;
- (void).cxx_destruct;

@end
