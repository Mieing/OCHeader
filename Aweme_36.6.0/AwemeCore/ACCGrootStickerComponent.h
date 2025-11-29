@class ACCRecognitionTrackModel, NSString, UIView, ACCGrootStickerViewModel, ACCGrootStickerHandler;
@protocol ACCEditServiceProtocol, ACCEditViewContainer, ACCStickerServiceProtocol, ACCVideoEditTipsService, ACCStickerPanelServiceProtocol, ACCGrootStickerInputDelegate, ACCEditMusicServiceProtocol, ACCTextLoadingViewProtcol, ACCEditTransitionServiceProtocol;

@interface ACCGrootStickerComponent : ACCFeatureComponent <ACCStickerPannelObserver, ACCGrootStickerDataProvider>

@property (retain, nonatomic) ACCGrootStickerViewModel *grootViewModel;
@property (retain, nonatomic) ACCGrootStickerHandler *grootStickerHandler;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (weak, nonatomic) id<ACCVideoEditTipsService> tipsSerivce;
@property (nonatomic) BOOL isCancelRequest;
@property (copy, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) ACCRecognitionTrackModel *trackModel;
@property (copy, nonatomic) NSString *tabName;
@property (weak, nonatomic) id<ACCGrootStickerInputDelegate> inputDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interactionStickers;
- (void)componentDidMount;
- (void)bindViewModel;
- (id)serviceBinding;
- (id)gestureInvalidFrameValue;
- (void)bindServices:(id)a0;
- (BOOL)isClipVideoReedit;
- (BOOL)handleSelectSticker:(id)a0 fromTab:(id)a1 willSelectHandle:(id /* block */)a2 dismissPanelHandle:(id /* block */)a3;
- (unsigned long long)stickerPriority;
- (void)addGrootStickerWithStickerID:(id)a0;
- (void)addGrootStickerWithStickerID:(id)a0 location:(id)a1 stickerModel:(id)a2 autoEdit:(BOOL)a3;
- (void)showEditView:(BOOL)a0 animation:(BOOL)a1;
- (id)grootStickerImagePathForDraftWithIndex:(long long)a0;
- (id)grootStickerImageNameForDraftWithIndex:(long long)a0;
- (id)customGrootStickerView:(id)a0;
- (void).cxx_destruct;

@end
