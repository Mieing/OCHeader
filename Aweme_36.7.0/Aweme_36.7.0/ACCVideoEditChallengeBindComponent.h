@class NSString, ACCVideoEditChallengeBindViewModel;

@interface ACCVideoEditChallengeBindComponent : ACCFeatureComponent <ACCPublishServiceMessage>

@property (retain, nonatomic) ACCVideoEditChallengeBindViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;

- (void)componentDidAppear;
- (id)aAWEStudioGlobalConfig;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)p_handleWillPublish;
- (void).cxx_destruct;
- (void)dealloc;

@end
