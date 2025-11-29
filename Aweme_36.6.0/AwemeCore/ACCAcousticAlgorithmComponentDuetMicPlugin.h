@class NSString, ACCAcousticAlgorithmComponent, AWERepoDuetModel;
@protocol ACCFeatureComponent, IESServiceProvider, ACCMicrophoneService, ACCAudioPortService, ACCDuetSessionSwtichService;

@interface ACCAcousticAlgorithmComponentDuetMicPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCAcousticAlgorithmComponent *hostComponent;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCMicrophoneService> microphoneService;
@property (weak, nonatomic) id<ACCAudioPortService> audioPortService;
@property (weak, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (weak, nonatomic) AWERepoDuetModel *repoDuet;
@property (copy, nonatomic) id /* block */ openDAPredicate;
@property (copy, nonatomic) id /* block */ openLEPredicate;
@property (copy, nonatomic) id /* block */ openEBPredicate;
@property (copy, nonatomic) id /* block */ showEBBarItemPredicate;
@property (copy, nonatomic) id /* block */ lufsBlock;
@property (copy, nonatomic) id /* block */ forceRecordAudioPredicate;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (BOOL)meetCommonRequirements;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)resignActive;

@end
