@class NSString;

@interface IESLiveCoreABManagerAdapterImpl : IESLiveBaseAdapter <IESLiveCoreABManagerAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableBootloader;
- (id)targetInstance;
- (BOOL)enableNewContainerKit;

@end
