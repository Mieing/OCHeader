@class NSString, NSDictionary, CBaseContact, UIViewController;

@interface MMPhoneNumberHandler : MMObject <WCActionSheetDelegate, CNContactViewControllerDelegate, CNContactPickerDelegate, IMsgRevokeExt> {
    CBaseContact *m_oContact;
}

@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic) BOOL bIsShowCallPhoneNumber;
@property (nonatomic) BOOL bIsShowCopyToast;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)handlePhoneNumber:(id)a0;
+ (void)handleWechatProfilePhoneNumber:(id)a0;
+ (void)handleBankCardNumber:(id)a0;
+ (void)handlePhoneNumber:(id)a0 contact:(id)a1;
+ (void)makePhoneCall:(id)a0;
+ (BOOL)canMakePhoneCall;
+ (void)addToContact:(id)a0;

- (id)init;
- (id)getViewController;
- (void)showContactActionSheet:(id)a0;
- (void)showTotalActionSheet:(id)a0;
- (void)showWechatProfilePhoneNumberActionSheet;
- (void)handlePhoneNumber:(id)a0;
- (void)handleBankCardNumber:(id)a0;
- (void)handleWechatProfilePhone:(id)a0;
- (void)handlePhoneNumber:(id)a0 contact:(id)a1;
- (void)handleTotalActionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)handleContactActionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)handleWechatOutActionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)showPeoplePickerController;
- (void)showNewPersonViewController;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)AddPhoneNumberToExistContact:(id)a0 viewController:(id)a1;
- (void)CreateNewContact:(id)a0 viewController:(id)a1;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (void).cxx_destruct;

@end
