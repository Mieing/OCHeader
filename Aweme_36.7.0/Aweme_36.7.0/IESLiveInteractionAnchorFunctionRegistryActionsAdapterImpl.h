@class NSString;

@interface IESLiveInteractionAnchorFunctionRegistryActionsAdapterImpl : IESLiveBaseAdapter <IESLiveInteractionAnchorFunctionRegistryActionsAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)functionRegistryDidSetup;

@end
