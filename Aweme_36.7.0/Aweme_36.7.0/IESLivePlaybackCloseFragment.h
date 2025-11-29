@class UIButton, HTSLiveToolbarItem, NSString;

@interface IESLivePlaybackCloseFragment : IESLivePlaybackComponent <IESLivePlaybackCustomAutoHideAnimService, IESVSVideoPlayAction>

@property (nonatomic) BOOL isHideComponent;
@property (nonatomic) BOOL isPortraitStream;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) HTSLiveToolbarItem *closeItemPlaceHolder;
@property (retain, nonatomic) HTSLiveToolbarItem *closeToolbarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)_clickCloseButton:(id)a0;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)lockStatusChange:(BOOL)a0;
- (void)reloadCloseButtonForLandscapeState:(BOOL)a0;
- (void).cxx_destruct;
- (void)_createCloseButton;

@end
