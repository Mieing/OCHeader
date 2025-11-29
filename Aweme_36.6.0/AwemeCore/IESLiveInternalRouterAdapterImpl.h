@class NSString;

@interface IESLiveInternalRouterAdapterImpl : IESLiveBaseAdapter <IESLiveInternalRouterAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pushUserProfile:(id)a0 secUID:(id)a1 animated:(BOOL)a2 trackInfo:(id)a3;
- (BOOL)pushUserProfileWithParamsModel:(id)a0;

@end
