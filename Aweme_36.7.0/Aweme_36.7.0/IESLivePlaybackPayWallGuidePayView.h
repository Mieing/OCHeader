@class NSString, HTSLiveEpisode, UIView;
@protocol IESHYContainerProtocol;

@interface IESLivePlaybackPayWallGuidePayView : UIView <IESHYHybridViewLifecycleProtocol, HTSLivePluginLayoutView>

@property (nonatomic) BOOL didLoad;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *fallbackUrk;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)renderWithUrl:(id)a0 fallbackUrl:(id)a1;
- (void)notityLeftTime:(double)a0;
- (void)customAutoHideAnimation:(BOOL)a0 animation:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hybridViewContentInsets;
- (double)hybridViewCustomAnimationTopOffset:(BOOL)a0;
- (void).cxx_destruct;
- (void)orientationChanged:(long long)a0;
- (id)viewType;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
