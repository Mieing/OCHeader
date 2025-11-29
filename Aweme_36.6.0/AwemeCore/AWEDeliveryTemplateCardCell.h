@class NSDictionary, AWEDeliveryDynamicCardErrorView, AWEECOMIMDynamicCardContainerView, UIView, AWEDeliveryTemplateCardModel;
@protocol AWEDeliveryCardComponentLoadingViewProtocol;

@interface AWEDeliveryTemplateCardCell : AWEDeliveryBaseUserMsgCell

@property (retain, nonatomic) AWEECOMIMDynamicCardContainerView *cardView;
@property (retain, nonatomic) AWEDeliveryDynamicCardErrorView *errorView;
@property (retain, nonatomic) UIView<AWEDeliveryCardComponentLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) NSDictionary *dynamicDataDict;
@property (retain, nonatomic) AWEDeliveryTemplateCardModel *cellModel;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)fetchDynamicDataAndUpdateCardView;
- (void)updateTemplateModelCallback;
- (void)cardViewDidChangeHeight;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;

@end
