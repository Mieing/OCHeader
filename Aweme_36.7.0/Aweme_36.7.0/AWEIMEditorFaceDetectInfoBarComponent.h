@class AWEIMRecorderImageRecognizeIndicatorView, ACCTextStickerHandler;
@protocol ACCEditViewContainer, ACCEditServiceProtocol;

@interface AWEIMEditorFaceDetectInfoBarComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCTextStickerHandler *textStickerHandler;
@property (retain, nonatomic) AWEIMRecorderImageRecognizeIndicatorView *indicatorView;

- (void)componentDidAppear;
- (void)loadComponentView;
- (void)componentDidMount;
- (BOOL)p_componentIsEnable;
- (void).cxx_destruct;

@end
