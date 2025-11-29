@class CJPayServiceDetailView, CJPayDyPayPlusXViewModel, CJPayMultifunctionalAttributeLabel;

@interface CJPayDyPayPlusXSignPayBodyView : UIView

@property (retain, nonatomic) CJPayMultifunctionalAttributeLabel *descLabel;
@property (retain, nonatomic) CJPayServiceDetailView *serviceDetailView;
@property (retain, nonatomic) CJPayDyPayPlusXViewModel *viewModel;

- (id)p_buildProtocolTextModels;
- (id)p_buildPauseMarkTextModel;
- (void)p_protocolDidClick:(id)a0;
- (id)p_buildDescTextModels:(id)a0;
- (id)p_buildServiceDetailViewModel;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithViewModel:(id)a0;

@end
