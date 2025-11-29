@class NSString, AWEPOIOfflineScanInfoView;

@interface AWEPOIOfflineScanInfoDialog : DUXAlertDialog <AWEPOIOfflineScanInfoButtonsDelegate>

@property (retain, nonatomic) AWEPOIOfflineScanInfoView *rootView;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshViewWithModel:(id)a0;
- (void)hideReceivedIcon:(BOOL)a0;
- (void)onConfirmButtonClick:(id)a0;
- (void)onCancelButtonClick:(id)a0;
- (void)updateConfirmAction:(id /* block */)a0;
- (void)updateCancelAction:(id /* block */)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setLoadingState:(BOOL)a0;

@end
