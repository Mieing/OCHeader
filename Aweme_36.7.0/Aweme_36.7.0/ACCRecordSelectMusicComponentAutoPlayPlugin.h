@class NSString;
@protocol ACCRecordSelectMusicAutoPlayService, ACCFeatureComponent;

@interface ACCRecordSelectMusicComponentAutoPlayPlugin : ACCFeatureComponent <ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCRecordSelectMusicAutoPlayService> selectMusicAutoPlayService;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
