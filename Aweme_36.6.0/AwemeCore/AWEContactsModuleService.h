@class NSString;

@interface AWEContactsModuleService : HTSService <AWEContactsModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAddressListAuthorizationOnLiveViewController:(id)a0;
- (void)uploadAddressBookOnView:(id)a0 isPresented:(BOOL)a1 request:(id)a2 load:(id)a3 completion:(id /* block */)a4;
- (void)uploadAddressBookOnView:(id)a0 isPresented:(BOOL)a1 request:(id)a2 load:(id)a3 trackParams:(id)a4 completion:(id /* block */)a5;
- (id)uploadContactAlertViewControllerWithParamsDict:(id)a0;
- (void)showUploadContactsAlertWithEnterFrom:(id)a0 actionBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)showUploadContactsAlertWithEnterFrom:(id)a0 actionBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)isShowingAddressListAlert;
- (BOOL)isShowingContactsAlert;
- (BOOL)isDouyinContactsAlert:(id)a0;
- (id)contactsAlertManager;
- (BOOL)canShowContactFriendsCellCommonCondition;
- (Class)contactsAlertManagerClass;
- (id)addressBookAuthorizationGuide:(id /* block */)a0;
- (BOOL)shouldOptimizeContactsAfteriOS18;
- (void)debugShowColdLaunchDouyinContactAlert;
- (id)aweAddressBookManager;
- (id)userRecommendManager;
- (Class)contactsColdLaunchManagerClass;
- (Class)contactsTrackManager;
- (id)findFriendsLoginGuideAlert;

@end
