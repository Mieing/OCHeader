@class ACCAIPropTextStickerViewModel;
@protocol ACCStickerServiceProtocol;

@interface ACCAIPropTextStickerComponent : ACCFeatureComponent

@property (retain, nonatomic) ACCAIPropTextStickerViewModel *viewModel;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)addAITextStickerIfNeeded;
- (id)addAITextStickerWithContent:(id)a0 position:(struct CGPoint { double x0; double x1; })a1 startAt:(double)a2 duration:(double)a3;
- (void).cxx_destruct;

@end
