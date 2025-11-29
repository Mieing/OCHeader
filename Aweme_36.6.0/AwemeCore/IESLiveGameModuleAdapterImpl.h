@class NSString;

@interface IESLiveGameModuleAdapterImpl : IESLiveBaseAdapter <IESLiveGameModuleAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nativeAppInterface;
- (id)gameSonicPanelInterface;
- (id)gameOpenPlatformStateInterface;

@end
