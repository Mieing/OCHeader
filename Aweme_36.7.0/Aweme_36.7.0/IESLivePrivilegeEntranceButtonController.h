@class NSString, IESLivePrivilegeEntranceButtonViewModel, NSMutableArray;

@interface IESLivePrivilegeEntranceButtonController : IESLiveCubeController <HTSLiveGiftActions, IESLivePrivilegeEntranceButtonExternal, IESLivePrivilegeModulePrivilegeEntranceButtonInterface>

@property (retain, nonatomic) IESLivePrivilegeEntranceButtonViewModel *entranceButtonViewModel;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)giftViewWillShow;
- (void)controllerActived;
- (void)unsubscribeEvent;
- (void)subscribeEvent;
- (void)prepareToAactive;
- (void)updateEntranceButtonModelUseEntranceDetail:(id)a0;
- (id)createPrivilegeEntranceButton;
- (void).cxx_destruct;
- (id)userStatus;

@end
