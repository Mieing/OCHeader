@class QryCancelECardDescRes, NSString, WCPayQryCancelECardDescCgi, UIButton;
@protocol WCPayECardDetailViewControllerDelegate;

@interface WCPayECardDetailViewController : WCPayBaseViewController <WCPayQryCancelECardDescCgiDelegate>

@property (retain, nonatomic) WCPayQryCancelECardDescCgi *descCgi;
@property (retain, nonatomic) QryCancelECardDescRes *descResponse;
@property (retain, nonatomic) UIButton *footerButton;
@property (weak, nonatomic) id<WCPayECardDetailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadView;
- (void)setupFooterButton;
- (id)dotsAndLabelsWithWidth:(double)a0 titles:(id)a1;
- (id)createDotLabel;
- (void)requestData;
- (void)close;
- (void)clickfooterButton;
- (void)qryCancelECardDescCgi:(id)a0 didGetResponse:(id)a1;
- (void)qryCancelECardDescCgi:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
