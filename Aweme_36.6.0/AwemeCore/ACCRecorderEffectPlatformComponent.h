@class NSString;
@protocol ACCRecordPropService;

@interface ACCRecorderEffectPlatformComponent : ACCFeatureComponent <ACCRecordPropServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;

@end
