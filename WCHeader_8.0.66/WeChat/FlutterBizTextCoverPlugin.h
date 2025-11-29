@class NSString, UIViewController;

@interface FlutterBizTextCoverPlugin : NSObject <MMFlutterPlugin, BizTextCoverApi>

@property (weak, nonatomic) UIViewController *attachedController;
@property (copy, nonatomic) id /* block */ resultCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)onCancelCreateTextCoverWithError:(id *)a0;
- (void)onConfirmCreateTextCoverInfo:(id)a0 error:(id *)a1;
- (void)showAgreeTermsDialogWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
