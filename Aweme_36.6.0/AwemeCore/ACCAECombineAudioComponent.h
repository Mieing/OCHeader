@class DVETrackPanelContext, ACCAEMultipleTrackAudioViewModel;
@protocol DVEEditingRuntimeProtocol, ACCAEComponentActionProtocol, DVEMulitpleTrackViewServiceProtocol;

@interface ACCAECombineAudioComponent : ACCAdvanceEditComponent

@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multiTrackService;
@property (weak, nonatomic) DVETrackPanelContext *panelContext;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (retain, nonatomic) ACCAEMultipleTrackAudioViewModel *multiAudioTrackViewModel;

- (void)bindServices:(id)a0;
- (void)handleClickCombineAudioMenu:(id)a0;
- (void).cxx_destruct;

@end
