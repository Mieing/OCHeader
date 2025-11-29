@class ACCSoundFXPickerAbilityProvider;

@interface ACCEditSoundFXComponent : ACCFeatureComponent

@property (retain, nonatomic) ACCSoundFXPickerAbilityProvider *soundFXAbilityProvider;

- (void)componentDidMount;
- (id)serviceBinding;
- (void).cxx_destruct;

@end
