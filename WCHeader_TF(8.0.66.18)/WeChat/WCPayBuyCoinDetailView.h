@class GetWecoinPriceListResponse, NSString, UIView, RichTextView, UIButton;

@interface WCPayBuyCoinDetailView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIButton *selectBoxButton;
@property (retain, nonatomic) UIView *rows;
@property (retain, nonatomic) UIView *protocolView;
@property (retain, nonatomic) RichTextView *protocolTextView;
@property (retain, nonatomic) GetWecoinPriceListResponse *priceListsResponse;
@property (nonatomic) unsigned int settedHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)refresh;
- (void)layoutRows;
- (id)layoutRowOne;
- (id)layoutRowTwo;
- (void)layoutProtocolView;
- (void)shakeAgreementView;
- (void)clickSelectBox;
- (void)clickCoin:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)rowOneInfos;
- (id)rowTwoInfos;
- (BOOL)shouldFetchNewProductInfos:(id)a0;
- (id)getProductIdsWith:(id)a0;
- (void).cxx_destruct;

@end
