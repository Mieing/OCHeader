@class NSString, WCPayUnionTransferBeforeCgi, CContact;
@protocol WCPaySelectChatroomMemberViewControllerDelegate;

@interface WCPaySelectChatroomMemberViewController : WCPayContactSelectListBaseViewController <WCPayContactSelectListBaseViewControllerDelegate, WCPayUnionTransferBeforeCgiDelegate>

@property (weak, nonatomic) id<WCPaySelectChatroomMemberViewControllerDelegate> delegate;
@property (retain, nonatomic) WCPayUnionTransferBeforeCgi *unionBeforeCgi;
@property (retain, nonatomic) CContact *selectUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)leftBarbuttonClick;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)getReloadContactDataList;
- (id)getChatroomContact;
- (void)onSelectedOrCancelContact:(id)a0 isSelected:(BOOL)a1;
- (void)realCallbackSelectContact:(id)a0;
- (void)onWCPayUnionTransferBeforeCgiResponseOK:(id)a0;
- (void)onWCPayUnionTransferBeforeCgiError:(id)a0 errorCode:(unsigned int)a1;
- (void)checkPermission:(unsigned int)a0 errMsg:(id)a1;
- (void).cxx_destruct;

@end
