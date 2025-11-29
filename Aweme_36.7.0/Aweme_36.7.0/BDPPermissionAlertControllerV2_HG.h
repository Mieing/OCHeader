@class NSString, UIView, BDPUniqueID, BDPGamePermissionAlertControllerBuilder;
@protocol BDPGamePermissionAlertView;

@interface BDPPermissionAlertControllerV2_HG : BDPBaseAlertViewController <BDPPermissionViewDelegate_HG, BDPGamePermissionViewDelegate, BDPAppInterfaceOrientationChangeMessage, BDPPermissionAlertControllerProtocol_HG>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPGamePermissionAlertControllerBuilder *builder;
@property (retain, nonatomic) UIView<BDPGamePermissionAlertView> *permissionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ checkBeforeClickConfirmCompletion;
@property (copy, nonatomic) id /* block */ cancelButtonClickCompletion;
@property (copy, nonatomic) id /* block */ confirmButtonClickCompletion;
@property (copy, nonatomic) id /* block */ closeButtonClickCompletion;

- (void)interfaceOrientationChangeComplete:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (void)showFromParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithUniqueID:(id)a0 description:(id)a1 iconURL:(id)a2 contentView:(id)a3 footerView:(id)a4 confirmText:(id)a5 cancelText:(id)a6 privacyView:(id)a7;
- (void)permissionViewDidCancel:(id)a0;
- (void)permissionViewDidConfirm:(id)a0;
- (void)permissionViewDidClose:(id)a0;
- (void)updatePermissionLayout:(long long)a0 uniqueID:(id)a1;
- (void).cxx_destruct;
- (id)initWithBuilder:(id)a0;
- (void)viewDidLoad;
- (id)alertView;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (BOOL)isLandscape;

@end
