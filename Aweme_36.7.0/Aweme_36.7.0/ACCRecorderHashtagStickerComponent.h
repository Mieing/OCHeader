@class ACCStickerHandler;
@protocol ACCRecorderStickerServiceProtocol, ACCRecorderViewContainer, ACCHashTagStickerHandlerProtocol;

@interface ACCRecorderHashtagStickerComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecorderStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCStickerHandler<ACCHashTagStickerHandlerProtocol> *stickerHandler;

- (void)componentDidAppear;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)p_addRecorderInteractionStickers;
- (void)autoAddHashtagSticker;
- (void).cxx_destruct;

@end
