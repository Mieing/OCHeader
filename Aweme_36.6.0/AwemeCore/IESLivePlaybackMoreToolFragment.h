@class HTSLiveExpandToolbarItem, HTSLiveVSPannelIcon, UIImageView, HTSEventForwardingView, NSString, IESLivePanelCollectionView;

@interface IESLivePlaybackMoreToolFragment : IESLivePlaybackComponent <IESLivePlaybackScreenRecordAction, IESLivePlaybackChangeStreamAction, IESLivePlaybackComponentLifeCycle> {
    struct { unsigned char didTopShow : 1; unsigned char didBotShow : 1; } _flags;
}

@property (retain, nonatomic) HTSLiveExpandToolbarItem *topMoreToolItem;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *bottomMoreToolItem;
@property (retain, nonatomic) HTSLiveExpandToolbarItem *lynxBottomMoreToolItem;
@property (nonatomic) BOOL isVerticalStream;
@property (retain, nonatomic) UIImageView *bottomIconView;
@property (retain, nonatomic) UIImageView *topIconView;
@property (retain, nonatomic) UIImageView *lynxBottomIconView;
@property (retain, nonatomic) HTSLiveVSPannelIcon *pannelIcon;
@property (retain, nonatomic) IESLivePanelCollectionView *panelView;
@property (retain, nonatomic) HTSEventForwardingView *backgroundViewForLandscapeOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)resetConfig:(id)a0 withItemsInfo:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsertForCurrentItem:(id)a0 previousItem:(id)a1;
- (void)componentWillMount;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)streamChangedWithEpisode:(id)a0;
- (void)reloadMoreToolPannel;
- (void)loadTopMoreToolItem;
- (void)initBottomItemIfNeed;
- (void)updateMoreToolItemForOrientation:(BOOL)a0;
- (void)trackMoreIconShowIfNeeded;
- (void)showTopMoreItemPanelView;
- (void)showBottomMoreItemPanelView;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;
- (BOOL)canExpand;

@end
