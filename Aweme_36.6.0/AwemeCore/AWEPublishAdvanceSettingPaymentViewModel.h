@class AWEVideoPublishViewModel, AWEPublishSettingPaymentModeSectionViewModel, AWEPublishSettingPaymentHostingSectionViewModel, BDXBridgeEventSubscriber, AWEPublishSettingPaymentConfigSectionViewModel, AWEPublishSettingPaymentAnchorSectionViewModel;

@interface AWEPublishAdvanceSettingPaymentViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWEPublishSettingPaymentModeSectionViewModel *paymentModeViewModel;
@property (retain, nonatomic) AWEPublishSettingPaymentConfigSectionViewModel *paymentConfigViewModel;
@property (retain, nonatomic) AWEPublishSettingPaymentAnchorSectionViewModel *paymentAnchorViewModel;
@property (retain, nonatomic) AWEPublishSettingPaymentHostingSectionViewModel *paymentHostingViewModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) id /* block */ checkButtonEnableState;
@property (copy, nonatomic) id /* block */ combProductDidDelete;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;

- (void)removeSalesFormBDXBridgeEvent;
- (BOOL)shouldShowSalesForm;
- (void)fetchPaymentCombProductsInfoCompletion:(id /* block */)a0;
- (void)updatePaymentCombProductsInfo;
- (void)appendPaymentHostingSectionViewModelWithItems:(id)a0;
- (void)appendPaymentAnchorSectionViewModelWithItems:(id)a0;
- (void)appendPaymentModeSectionViewModelWithItems:(id)a0;
- (void)subscribeSalesFormBDXBridgeEvent;
- (void)appendPaymentConfigSectionViewModelWithItems:(id)a0;
- (void).cxx_destruct;

@end
