@protocol ACCEditElementBindService;

@interface ACCEditElementBindComponent : ACCFeatureComponent

@property (retain, nonatomic) id<ACCEditElementBindService> editElementBindService;

- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
