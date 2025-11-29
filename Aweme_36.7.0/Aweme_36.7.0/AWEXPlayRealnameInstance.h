@class NSString, AWEXPlayOpenServiceModel;
@protocol AWEBatManAuthServiceTrakerDelegate;

@interface AWEXPlayRealnameInstance : NSObject <AWEBatManIDCardAuthViewControllerActionDelegate>

@property (retain, nonatomic) AWEXPlayOpenServiceModel *model;
@property (weak, nonatomic) id<AWEBatManAuthServiceTrakerDelegate> trackerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCloseButtonClickedWithCheck:(BOOL)a0;
- (void)onConfirmButtonClickedWithCheck:(BOOL)a0;
- (void)onRetainDialogConfirmClicked;
- (void)onRetainDialogExitClicked;
- (void)requestInterconnectionRealnameWithModel:(id)a0 completion:(id /* block */)a1;
- (void)p_startRealnameInterconnectionAuth:(id /* block */)a0;
- (void)p_callNewRealnameLocalAuthViewControllerWithCallback:(id /* block */)a0;
- (void)p_callRealnameInterconnectionWithCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
