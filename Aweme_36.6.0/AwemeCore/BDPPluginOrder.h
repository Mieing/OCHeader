@class NSString;

@interface BDPPluginOrder : BDPBridgeInstancePlugin <BDPContainerLifeCycleMessage>

@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
