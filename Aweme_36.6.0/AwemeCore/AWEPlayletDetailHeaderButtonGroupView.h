@class NSObject, AWEDiscoverDPlayletCollectionButton, NSString, BDXBridgeEventSubscriber, AWEPaymentDetailBuyButton, AWEPlayletInfoModel;
@protocol AWEPaymentEventHandlerProtocol, AWEPaymentDetailEventHandlerProtocol;

@interface AWEPlayletDetailHeaderButtonGroupView : UIView <AWEPaymentEventHandlerDelegate>

@property (retain, nonatomic) AWEDiscoverDPlayletCollectionButton *collectButton;
@property (retain, nonatomic) AWEPaymentDetailBuyButton *paymentButton;
@property (retain, nonatomic) AWEPlayletInfoModel *playletModel;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *fromGroupID;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (retain, nonatomic) NSObject<AWEPaymentEventHandlerProtocol, AWEPaymentDetailEventHandlerProtocol> *paymentEventHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowPaymentButton;
- (void)handlePayEvent:(id)a0;
- (void)handleLoginEvent:(id)a0;
- (void)refreshPlayletForPaymentVideosUpdate;
- (void)updatePaymentButtonIfNeeded:(id)a0;
- (void)orderPlaylet:(id)a0;
- (void)showAuthorIncomeDataView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)configureWithModel:(id)a0;

@end
