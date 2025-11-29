@class UILabel, UIView, ACCIMStickerGenerateHelper, ACCTextStickerHandler;
@protocol _TtP9AWELottie13AWELottieView_, ACCStickerServiceProtocol, ACCEditViewContainer, ACCTextStickerApplyServiceProtocol, ACCCTRServiceProtocol, ACCEditServiceProtocol;

@interface ACCAIGenerateEmoticonTextToolComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (weak, nonatomic) id<ACCTextStickerApplyServiceProtocol> textStickerApplyService;
@property (retain, nonatomic) ACCTextStickerHandler *textStickerHandler;
@property (retain, nonatomic) ACCIMStickerGenerateHelper *AIStickerUploadHelper;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *lotLoadingView;
@property (retain, nonatomic) UIView *loadingContainer;
@property (retain, nonatomic) UILabel *loadingTextLabel;

- (void)loadComponentView;
- (unsigned long long)preferredLoadPhase;
- (void)addBarItemToToolBar;
- (BOOL)enableTextRefactor;
- (void)findTextStickerHandler;
- (id)generateTextBarItem;
- (void)didClickGenerateTextItem;
- (void)showAITextLoadingView;
- (void)addAITextStickerWithContent:(id)a0;
- (void)hideAITextLoadingView;
- (void).cxx_destruct;

@end
