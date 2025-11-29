@class WCPayRealnameAuthenResp, ContactsDataLogic, NSString, SharePreConfirmSheetView, WCPayRealnameVerifyGuardianCgi, CContact, WCPayRealnameVerifyParentCgi, WCPayNetImageResource;
@protocol WCPayRealnameSelectGuardianViewControllerDelegate;

@interface WCPayRealnameSelectGuardianViewController : WCPayContactSelectListBaseViewController <WCPayContactSelectListBaseViewControllerDelegate, SharePreConfirmSheetViewDelegate, WCPayRealnameVerifyGuardianCgiCgiDelegate, WCPayRealnameVerifyParentCgiDeleagte>

@property (retain, nonatomic) ContactsDataLogic *contactsDataLogic;
@property (retain, nonatomic) CContact *selectedContact;
@property (retain, nonatomic) SharePreConfirmSheetView *confirmSheetView;
@property (retain, nonatomic) WCPayRealnameVerifyGuardianCgi *verifyGuardianCgi;
@property (retain, nonatomic) WCPayNetImageResource *imageLoader;
@property (retain, nonatomic) WCPayRealnameVerifyParentCgi *liteappVerifyParentCgi;
@property (retain, nonatomic) WCPayRealnameAuthenResp *authenResp;
@property (weak, nonatomic) id<WCPayRealnameSelectGuardianViewControllerDelegate> delegate;
@property (nonatomic) BOOL fromLiteApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)onClickCancel;
- (id)getReloadContactDataList;
- (id)getChatroomContact;
- (void)onSelectedOrCancelContact:(id)a0 isSelected:(BOOL)a1;
- (void)OnSharePreConfirmSheetViewSend:(id)a0;
- (void)sendVerifyParentRequest:(id)a0;
- (void)OnSharePreConfirmSheetViewCancel:(id)a0;
- (void)onWCPayRealnameVerifyGuardianCgiResp:(id)a0;
- (void)onWCPayRealnameVerifyGuardianCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)onWCPayRealnameVerifyParentCgiResp:(id)a0;
- (void)sendAppMessage:(id)a0 onComplete:(id /* block */)a1;
- (void)sendLiteAppMessage:(id)a0 onComplete:(id /* block */)a1;
- (void)sendTextMessage:(id)a0;
- (void)handleError:(id)a0;
- (void).cxx_destruct;

@end
