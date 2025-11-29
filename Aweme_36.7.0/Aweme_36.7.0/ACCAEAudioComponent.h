@class DVEMultipleTrackAudioViewModelNew, DVETrackPanelContext;
@protocol DVEMulitpleTrackViewServiceProtocol;

@interface ACCAEAudioComponent : ACCAdvanceEditComponent

@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multiTrackService;
@property (weak, nonatomic) DVETrackPanelContext *panelContext;
@property (retain, nonatomic) DVEMultipleTrackAudioViewModelNew *audioViewModel;

- (void)componentDidMount;
- (void).cxx_destruct;

@end
