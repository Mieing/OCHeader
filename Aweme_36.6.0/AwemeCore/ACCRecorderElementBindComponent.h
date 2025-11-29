@protocol ACCRecorderElementBindService;

@interface ACCRecorderElementBindComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCRecorderElementBindService> recorderElementBindService;

- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
