@class NSString, IESLiveStickerView, IESLiveStickerItemNewModel, IESLiveAudienceStickerViewModel;
@protocol IESLiveStickerAudienceActions;

@interface IESLiveAudienceStickerFragment : IESLiveRoomComponent <IESLiveStickerAudienceLayoutProtocol, HTSLiveMessageSubscriber, HTSLiveStickerRouter, IESLiveAnchorToolsModuleStickerInterface>

@property (retain, nonatomic) IESLiveAudienceStickerViewModel *viewModel;
@property (retain, nonatomic) IESLiveStickerView *imageStickerView;
@property (retain, nonatomic) IESLiveStickerView *textStickerView;
@property (retain, nonatomic) IESLiveStickerItemNewModel *imageModel;
@property (retain, nonatomic) IESLiveStickerItemNewModel *textModel;
@property (retain, nonatomic) id<IESLiveStickerAudienceActions> audienceActions;
@property (nonatomic) BOOL shouldHideSticker;
@property (nonatomic) BOOL shouldHideStickerWithPin;
@property (nonatomic) BOOL audienceCloseImageSticker;
@property (nonatomic) BOOL audienceCloseTextSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDidAppear;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (id)stickerContainerView;
- (double)liveWidth;
- (void)getStickerInfoWithStickerId:(id)a0 completion:(id /* block */)a1;
- (void)hideCurrentSticker:(BOOL)a0;
- (void)resumeCurrentSticker:(BOOL)a0;
- (BOOL)isStickerApplied;
- (void)hideCurrentStickerWithAnimated:(BOOL)a0;
- (void)resumeCurrentStickerWithAnimated:(BOOL)a0;
- (void)refreshStickerView;
- (void)updateStickerView:(id)a0 withModel:(id)a1;
- (id)hiddenAnimationWithDuration:(double)a0;
- (void)loadTextStickerView;
- (void)loadImageStickerView;
- (void)stickerClicked:(id)a0;
- (void)layoutAudienceTextStickerViewWithModel:(id)a0;
- (void)layoutAudienceImageStickerViewWithModel:(id)a0;
- (void)removeAudienceTextStickerView;
- (void)removeAudienceImageStickerView;
- (void)trackAudienceTextStickerShow;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
