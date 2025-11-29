@protocol ACCEditAudioEffectProtocolD, ACCEditServiceProtocol;

@interface AWEAudioAlgorithmConfigEditComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditAudioEffectProtocolD> audioService;

- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)p_configAudioBalance;
- (id)p_balanceFilterForAverageVolume:(double)a0 peakVolume:(double)a1 targetVolume:(double)a2;
- (void).cxx_destruct;

@end
