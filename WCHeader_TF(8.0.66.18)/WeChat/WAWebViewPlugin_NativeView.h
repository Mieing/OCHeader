@class NSDictionary, NSMutableArray, NSString;

@interface WAWebViewPlugin_NativeView : WAWebViewPluginBase <WAAlertDialogDelegate>

@property (nonatomic) BOOL didAppear;
@property (retain, nonatomic) NSDictionary *toastParam;
@property (retain, nonatomic) NSMutableArray *alertsWaitingQueue;
@property (retain, nonatomic) NSMutableArray *alertsDisplayingQueue;
@property (retain, nonatomic) NSMutableArray *actionSheetArr;
@property (nonatomic) unsigned long long alertDisplayingCount;
@property (copy, nonatomic) id /* block */ onLoadingToastFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showToast:(id)a0;
- (void)updateToast:(id)a0;
- (void)hideToast:(id /* block */)a0;
- (BOOL)isLoadingToastExsist;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)showModal:(id)a0 delegate:(id)a1;
- (void)updateModal:(id)a0;
- (void)onConfirm:(id)a0;
- (void)onCancel:(id)a0;
- (id)popDelegateForAlert:(id)a0;
- (id)getDisplayingModal;
- (void)bringAlertsToFront;
- (id)getModalContentDescription;
- (id)getToastContentDescription;
- (void)addActionSheet:(id)a0;
- (void)delActionSheet:(id)a0;
- (id)getActionSheet:(long long)a0;
- (void).cxx_destruct;

@end
