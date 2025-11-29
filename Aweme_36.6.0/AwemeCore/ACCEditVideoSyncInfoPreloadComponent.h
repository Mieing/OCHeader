@interface ACCEditVideoSyncInfoPreloadComponent : ACCFeatureComponent

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)requestVideoSyncModel;

@end
