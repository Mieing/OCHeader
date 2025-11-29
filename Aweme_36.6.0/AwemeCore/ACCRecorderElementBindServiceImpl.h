@class NSString, AWEVideoPublishViewModel;
@protocol ACCRecordSwitchModeService, ACCElementBindService, IESServiceProvider, ACCRecordPropService;

@interface ACCRecorderElementBindServiceImpl : NSObject <ACCRecordPropServiceSubscriber, ACCRecorderElementBindService>

@property (weak, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCElementBindService> elementBindService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (nonatomic) BOOL elementBindRequestOnAir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)bindService;
- (BOOL)elementSourceApplying:(id)a0;
- (void)handleElementBind:(long long)a0 sourceId:(id)a1;
- (id)initWithServiceProvider:(id)a0 repoContainer:(id)a1;
- (BOOL)shouldFetchBindElementFollowShoot:(long long)a0;
- (id)followShootElementArray;
- (void)recorderComponentDidAppear;
- (void)fetchFollowShootElementBindInfoIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
