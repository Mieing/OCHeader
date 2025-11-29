@class NSString;

@interface IESLiveCommercialComponentSwitcherFragment : IESLiveRoomComponent <IESLiveCommercialComponentSwitcherInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)switchCommercialComponent:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)switchCommercialComponent:(unsigned long long)a0 shouldShowAlertIfSourceUnknown:(BOOL)a1 completion:(id /* block */)a2;
- (void)switchCommercialComponent:(unsigned long long)a0 alertCallBack:(id /* block */)a1 switchToolBarAPICallBack:(id /* block */)a2;
- (void)switchCommercialComponent:(unsigned long long)a0 skipAlert:(BOOL)a1 skipNetwork:(BOOL)a2 alertCallBack:(id /* block */)a3 switchToolBarAPICallBack:(id /* block */)a4;
- (unsigned long long)currentSourceComponent;
- (BOOL)skipAlertForSupportGamePromotionCoexistWithComponent:(unsigned long long)a0;
- (void)switchComponentRoomId:(id)a0 from:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (void)preCheckToolBarPermissionWithComponent:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (id)titleFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (id)descFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (int)convertComponentType:(unsigned long long)a0;
- (id)interactGameDescription;
- (id)lGameDescription;

@end
