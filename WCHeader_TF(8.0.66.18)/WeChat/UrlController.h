@class NSString, GetA8KeyLogic, MMURLHandler, MMPhoneNumberHandler;
@protocol UrlControllerDelegate;

@interface UrlController : MMObject <MMWebViewDelegate, contactInfoDelegate, IMsgExt, ILinkEventExt, WCActionSheetDelegate> {
    MMURLHandler *m_urlHandler;
    MMPhoneNumberHandler *m_phoneNumberHandler;
}

@property (retain, nonatomic) GetA8KeyLogic *getA8KeyLogic;
@property (weak, nonatomic) id<UrlControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)Register;
- (void)UnRegister;
- (void)Reset;
- (void)webViewReturn:(id)a0;
- (void)contactsReturn:(BOOL)a0 contact:(id)a1;
- (void)jumpToBindPhone;
- (void)jumpToProfile:(id)a0;
- (void)onDone:(id)a0;
- (void)handleUrl:(id)a0 withExtraInfo:(id)a1;
- (id)handlePreviewUrl:(id)a0 withExtraInfo:(id)a1;
- (BOOL)handleOpenIMKefuUrl:(id)a0;
- (void)AddPhoneNumberToExistContact:(id)a0;
- (void)CreateNewContact:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
