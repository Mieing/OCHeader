@protocol ACCEditViewContainer, ACCStickerServiceProtocol, ACCCustomStickerServiceProtocol;

@interface AFDEditTextCustomStickerComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCCustomStickerServiceProtocol> customSticker;

- (id)barItem;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)customStickerEffectDict;
- (BOOL)shouldLoadComponent;
- (void).cxx_destruct;

@end
