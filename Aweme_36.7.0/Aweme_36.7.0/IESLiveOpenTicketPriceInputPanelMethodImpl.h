@class IESLiveGuideAnchorPaidLiveQuicklySelectPricePanel;

@interface IESLiveOpenTicketPriceInputPanelMethodImpl : IESLiveOpenTicketPriceInputPanelMethod

@property (retain, nonatomic) IESLiveGuideAnchorPaidLiveQuicklySelectPricePanel *quicklySelectPricePanel;
@property (nonatomic) BOOL isBecameFirstResponder;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)openTicketPriceInputPanelWithDefaultPrice:(id)a0 recommendedPrices:(id)a1 completion:(id /* block */)a2;
- (void)trackTicketPriceInputPanelRecommendedPriceClickWithPrice:(id)a0;
- (void)trackOpenTicketPriceInputPanel;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;

@end
