@class NSString;

@interface AWEYAPTransferAccountsService : HTSService <AWEYAPTransferAccountsService, DUXActionSheetDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (void)openSendTransferPageWithParams:(id)a0;
- (void)openTransferDetailWithParams:(id)a0;
- (void)openRouterAdaptPage:(id)a0;
- (void)beginSendTransferMoneyWithParams:(id)a0;

@end
