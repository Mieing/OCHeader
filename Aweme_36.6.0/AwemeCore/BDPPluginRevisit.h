@class NSString;

@interface BDPPluginRevisit : BDPBridgeInstancePlugin <BDPContainerLifeCycleMessage, BDPAppRouteChangeMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateGuideConditionWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateGuideConditionStatusWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
