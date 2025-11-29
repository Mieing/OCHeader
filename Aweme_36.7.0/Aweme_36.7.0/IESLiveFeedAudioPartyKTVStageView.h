@class IESLivePartyKTVStageController, NSString, IESLiveFeedAudioStageViewExtraModel, UIImageView, IESLiveKTVCommonStore, HTSLiveUser, IESLiveInteractionLayout, IESLiveKTVPreStreamContext, IESLiveInteractionDynamicStageAudioPrestreamAdapter;
@protocol IESLiveRoomService, IESLivePlayerProtocol;

@interface IESLiveFeedAudioPartyKTVStageView : UIView <IESLiveFeedAudioStageViewProtocol>

@property (retain, nonatomic) IESLivePartyKTVStageController *stageController;
@property (retain, nonatomic) IESLiveKTVCommonStore *commonStore;
@property (retain, nonatomic) IESLiveKTVPreStreamContext *preStreamContext;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) IESLiveInteractionLayout *currentLayout;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) HTSLiveUser *roomOwner;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) IESLiveFeedAudioStageViewExtraModel *extraModel;
@property (nonatomic) BOOL smallMode;
@property (nonatomic) BOOL enableLayoutConfig;
@property (nonatomic) BOOL userLynxSeat;
@property (weak, nonatomic) IESLiveInteractionDynamicStageAudioPrestreamAdapter *audioPreSteamDynamicView;
@property (copy, nonatomic) id /* block */ firstBgRenderBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListViewFrame;
- (id)allSeatProviderViews;
- (void)configWithListModel:(id)a0;
- (id)ktvPreStreamContext;
- (id)emojiContainerForUserID:(id)a0 isInteractiveEmoji:(BOOL)a1;
- (void)smoothExitRoomToPreviewFast;
- (void)smoothExitRoomToPreview;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })stageInsetsForAdapterSize:(struct CGSize { double x0; double x1; })a0;
- (void)willLoad;
- (void)willUnLoad;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roomOwner:(id)a1 roomModel:(id)a2 layout:(id)a3 extra:(id)a4;
- (void)handleSEIParseResult:(id)a0 metaDict:(id)a1;
- (void)updateAnchorUser:(id)a0;
- (void)smoothEnterRoomFromPreview;
- (void)onMessageReceivedFromPrestream:(id)a0 withDict:(id)a1;
- (void).cxx_destruct;
- (id)layout;

@end
