@class NSString;
@protocol AWEMRBadgeConsistencyPluginDelegate, AWEHPChannelBaseProtocol;

@interface AWEMRBadgeConsistencyPlugin : NSObject <AWEHPChannelPluginControllerProtocol, AWEMRBadgeConsistencyPluginProtocol>

@property (weak, nonatomic) id<AWEMRBadgeConsistencyPluginDelegate> delegate;
@property (weak, nonatomic) id<AWEHPChannelBaseProtocol> channel;
@property (nonatomic) BOOL didAddNotifications;
@property (nonatomic) BOOL enterTabOnce;
@property (nonatomic) BOOL isTabCurrentSelecting;
@property (nonatomic) BOOL isTabSelectingOnTrigger;
@property (nonatomic) BOOL hasReportedInconsistencyCurrentCycle;
@property (copy, nonatomic) NSString *lastEnterFrom;
@property (nonatomic) double lastEnterMediaTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotifications;
- (void)bottomChannelDidLoad:(id)a0;
- (void)bottomChannelDidReload:(id)a0;
- (void)bottomChannelDidUnload:(id)a0;
- (void)bottomChannel:(id)a0 willSelectItemWithEnterModel:(id)a1;
- (void)bottomChannel:(id)a0 didSelectItemFromPreviousSelectedType:(long long)a1 isByTap:(BOOL)a2;
- (void)bottomChannel:(id)a0 didUnselectItemToNextSelectedType:(long long)a1 isByTap:(BOOL)a2;
- (void)bottomChannel:(id)a0 badgeDidShowWithContext:(id)a1;
- (void)bottomChannel:(id)a0 badgeDidDowngradeWithContext:(id)a1;
- (void)bottomChannel:(id)a0 badgeDidHideWithContext:(id)a1;
- (void)channel:(id)a0 didLoadWithType:(unsigned long long)a1;
- (void)channelDidReload:(id)a0;
- (void)channel:(id)a0 didUnloadWithType:(unsigned long long)a1;
- (void)channel:(id)a0 enterWithModel:(id)a1;
- (void)channel:(id)a0 leaveWithModel:(id)a1;
- (void)channel:(id)a0 badgeDidShowWithContext:(id)a1;
- (void)channel:(id)a0 badgeDidDowngradeWithContext:(id)a1;
- (void)channel:(id)a0 badgeDidHideWithContext:(id)a1;
- (void)triggerBadgeConsistencyCheck;
- (void)safeTriggerBadgeConsistencyCheck;
- (void)p_triggerBadgeConsistencyCheck;
- (void)reportInconsistencyWithInfo:(id)a0 badgeModel:(id)a1;
- (id)getBizTrackParamsForBadgeConsistency;
- (void).cxx_destruct;
- (void)handleDidBecomeActive:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)removeNotifications;

@end
