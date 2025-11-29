@class HTSLiveToolbarItem, UIImage, NSString;

@interface IESLivePlaybackShareFragment : IESLivePlaybackComponent <IESLivePlaybackShareService, IESLivePlaybackChangeStreamAction>

@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (retain, nonatomic) HTSLiveToolbarItem *outterItem;
@property (retain, nonatomic) HTSLiveToolbarItem *outterTopItem;
@property (retain, nonatomic) HTSLiveToolbarItem *outterBottomItem;
@property (retain, nonatomic) UIImage *tokenImage;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL hasShowTopItem;
@property (nonatomic) BOOL hasShowBottomItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (id)playbackEpisodeModel;
- (id)trackParameters;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)streamChangedWithEpisode:(id)a0;
- (id)getShareConfigInToolbarList;
- (void)insertOutletShareToolBar:(id)a0;
- (void)updateShareToolbarItemInMorePanel;
- (void)updateShareItemOnBottomToolbarOutside;
- (id)createItemWith:(BOOL)a0 config:(id)a1;
- (void)showSharePanelWithSource:(id)a0;
- (void)loadShareToolbarItemInMorePanel;
- (void)removeShareToolbarItemInMorePanel;
- (void)addDouplusInSharePanel:(id /* block */)a0;
- (void).cxx_destruct;
- (id)contextWithSource:(id)a0;

@end
