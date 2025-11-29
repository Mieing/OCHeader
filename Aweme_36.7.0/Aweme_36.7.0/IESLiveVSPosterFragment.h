@class IESLiveVSPosterStore, NSString, IESLivePosterMakerPanel, IESLiveVSPhotosSelectPanel, IESLiveVSMaskPreView;

@interface IESLiveVSPosterFragment : IESLiveRoomComponent <IESLiveVSPosterStoreReaction, IESLiveVSPosterAction>

@property (retain, nonatomic) IESLivePosterMakerPanel *posterPanel;
@property (retain, nonatomic) IESLiveVSPosterStore *store;
@property (retain, nonatomic) IESLiveVSMaskPreView *maskView;
@property (retain, nonatomic) IESLiveVSPhotosSelectPanel *selectPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (double)panelHeight;
- (void)componentBindService;
- (void)didSetAttachingDIContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })panelFrame;
- (void)showLikeEggEntranceView;
- (void)hasLoadLocalAssets;
- (void)saveImageToLocal:(id)a0;
- (void)createMinePoster;
- (void)cancelCurrentStatus;
- (void)showPreViewPoster;
- (void)showPhotoSelectPanel;
- (void)showPosterMakerPanel;
- (id)createSelectPanelViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createPanelViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didCreatePoster;
- (void).cxx_destruct;
- (double)bottomOffset;

@end
