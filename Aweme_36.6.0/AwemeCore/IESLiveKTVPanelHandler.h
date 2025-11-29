@class IESLiveKTVHomePanel, NSString, IESLiveInteractionKTVFastCutSongPopup, UIView, IESLiveInteractionKTVMusicFeedbackView, IESLiveKTVCommonStore;
@protocol IESLivePerfSampler;

@interface IESLiveKTVPanelHandler : NSObject <IESLiveSocialInteractAction, IESLiveKTVPanelHandlerProtocol>

@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) double showTimeInterval;
@property (retain, nonatomic) IESLiveKTVHomePanel *homePanel;
@property (retain, nonatomic) IESLiveInteractionKTVFastCutSongPopup *fastCutSongPopupView;
@property (retain, nonatomic) IESLiveInteractionKTVMusicFeedbackView *musicFeedbackView;
@property (retain, nonatomic) UIView *musicFeedbackViewEmptyClickedView;
@property (weak, nonatomic) IESLiveKTVCommonStore *store;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)showPanel:(unsigned long long)a0;
- (void)hidePanel:(id /* block */)a0;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)p_showPanel:(id /* block */)a0 completion:(id /* block */)a1;
- (void)showPanel:(unsigned long long)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
- (void)showPanel:(unsigned long long)a0 songName:(id)a1 singerName:(id)a2 enterFrom:(id)a3 completion:(id /* block */)a4;
- (void)showPanel:(unsigned long long)a0 songName:(id)a1 singerName:(id)a2;
- (void)showPanel:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)hideWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)handleFastCutSongWithMusic:(id)a0;
- (void)p_hideMusicListFeedbackView;
- (void)p_loadHomePanelWithItem:(id)a0;
- (void)didPanelHide;
- (void)p_unloadHomePanel;
- (void)tr_closeControlPanel;
- (void)p_showMusicListFeedbackView:(id)a0;
- (void)hideKTVFastCutSongPopupWithCompletion:(id /* block */)a0;
- (void)p_clickMusicFeedBackViewEmptyView;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)dismiss:(id /* block */)a0;

@end
