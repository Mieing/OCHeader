@class ACCCameraSubscription, NSString, NSArray, ACCThreadSafeMutableDictionary;
@protocol AEKAudioAbility, AEKVideoAbility;

@interface AEKTrackBindingAbilityImpl : AEKEditAbility <AEKDoneSubscriber, AEKTrackBindingAbility>

@property (weak, nonatomic) id<AEKAudioAbility> audioAbility;
@property (weak, nonatomic) id<AEKVideoAbility> videoAbility;
@property (retain, nonatomic) ACCThreadSafeMutableDictionary *strategyPool;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *strategyArray;

- (id)applyStashes:(id)a0;
- (void)willDone;
- (id)bindMainVideoWithSubjectType:(unsigned long long)a0 subjectId:(id)a1 bindingType:(unsigned long long)a2 handler:(id /* block */)a3;
- (BOOL)addStrategyImpl:(id)a0;
- (BOOL)execStrategyImpl:(id)a0;
- (BOOL)execAudioStrategyImpl:(id)a0;
- (BOOL)execVideoStrategyImpl:(id)a0;
- (id)bindMainVideoWithSubjectType:(unsigned long long)a0 bindingType:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)unbindStrategyForId:(id)a0;
- (void)unbindAllStrategy;
- (id)stashStrategyWithFilter:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
