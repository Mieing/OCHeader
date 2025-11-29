@class NSString, ACCAcousticAlgorithmComponent;
@protocol ACCFeatureComponent, IESServiceProvider, ACCMicrophoneService, ACCAudioPortService;

@interface ACCAcousticAlgorithmComponentMusicMicPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCAcousticAlgorithmComponent *hostComponent;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCMicrophoneService> microphoneService;
@property (retain, nonatomic) id<ACCAudioPortService> audioPortService;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (BOOL)meetCommonRequirements;
- (void).cxx_destruct;

@end
