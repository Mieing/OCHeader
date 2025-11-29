@class IESLivePlaybackPopupItem, IESLivePlaybackVideoCacheStore, HTSLiveToolbarItem, NSString, UIView, IESLivePlaybackVideoListView, UIGestureRecognizer;

@interface IESLivePlaybackVideoCacheFragment : IESLivePlaybackComponent <IESVSVideoPlayAction, UIGestureRecognizerDelegate, IESLivePlaybackChangeStreamAction>

@property (retain, nonatomic) IESLivePlaybackVideoCacheStore *store;
@property (weak, nonatomic) IESLivePlaybackVideoListView *videoListView;
@property (retain, nonatomic) IESLivePlaybackPopupItem *popupItem;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (retain, nonatomic) HTSLiveToolbarItem *landscapeToolbarItem;
@property (nonatomic) BOOL isRetrying;
@property (retain, nonatomic) UIView *backMaskView;
@property (retain, nonatomic) UIView *backMaskViewForResolution;
@property (retain, nonatomic) UIGestureRecognizer *backMaskTapRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (id)createToolbarItem;
- (id)getVideoResolutionString:(long long)a0;
- (void)p_showNetworkAlert;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoFinish;
- (void)streamChangedWithEpisode:(id)a0;
- (void)closePopUpView;
- (void)p_addVideoCacheToolbarItem;
- (void)p_removeVideoCacheToolbarItem;
- (void)p_showVideoListView;
- (double)p_bottomMaxHeight;
- (void)p_handleModelClicked:(id)a0;
- (void)p_showResolutionView;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)p_addObservers;

@end
