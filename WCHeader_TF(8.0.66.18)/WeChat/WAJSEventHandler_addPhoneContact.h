@class NSDictionary, NSString;

@interface WAJSEventHandler_addPhoneContact : WAJSEventHandler_BaseEvent <WCActionSheetDelegate, CNContactViewControllerDelegate, CNContactPickerDelegate>

@property (retain, nonatomic) NSDictionary *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)addToExistContact;
- (void)createNewContact;
- (void)copyToContact:(id)a0;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void).cxx_destruct;

@end
