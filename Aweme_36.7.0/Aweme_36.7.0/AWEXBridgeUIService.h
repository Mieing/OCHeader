@class NSString, AWEUITextLoadingView, AWEXBridgeActionSheetDelegate, DUXActionSheet, AWEUILoadingView, DUXLoadingToast;

@interface AWEXBridgeUIService : NSObject <DUXAlertDialogDelegate, BDXBridgeUIServiceProtocol>

@property (retain, nonatomic) DUXActionSheet *actionSheet;
@property (retain, nonatomic) AWEXBridgeActionSheetDelegate *actionSheetDelegate;
@property (weak, nonatomic) AWEUITextLoadingView *textLoadingView;
@property (weak, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)alertDialogDidClickMaskArea:(id)a0;
- (void)showModalWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)showLoadingInContainer:(id)a0 withParamModel:(id)a1 completionHandler:(id /* block */)a2;
- (void)hideLoadingInContainer:(id)a0 withParamModel:(id)a1 completionHandler:(id /* block */)a2;
- (void)showToastWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)showActionSheetWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)showBottomNotificationWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishWithAction:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
