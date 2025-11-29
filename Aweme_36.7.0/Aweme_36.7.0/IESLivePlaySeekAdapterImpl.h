@class NSString;

@interface IESLivePlaySeekAdapterImpl : IESLiveBaseAdapter <IESLivePlaySeekAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interactionModeStartedWithLayout:(id)a0 complete:(id /* block */)a1;

@end
