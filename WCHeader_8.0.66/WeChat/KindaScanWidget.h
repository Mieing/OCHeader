@class NSString, NSData, WCPayCardNumberConfirmViewController, MMVoidStringStringBinaryCallback;
@protocol KindaScanWidgetDelegate;

@interface KindaScanWidget : NSObject <WCPayFillCardNumberViewControllerDelegate, WCPayCardNumberScanDelegate, MMKScanWidget> {
    MMVoidStringStringBinaryCallback *m_callback;
}

@property (nonatomic) BOOL dismissOnScanFinish;
@property (retain, nonatomic) WCPayCardNumberConfirmViewController *scanConfirmViewController;
@property (retain, nonatomic) NSString *scanResult;
@property (retain, nonatomic) NSData *scanImageData;
@property (weak, nonatomic) id<KindaScanWidgetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHandlerImpl:(id)a0;
- (void)scan:(id)a0;
- (void)dismissOnScanFinish:(BOOL)a0;
- (void)setScanWidgetDelegate:(id)a0;
- (void)didFindCardNumber:(id)a0 cardImage:(id)a1 scanResult:(id)a2;
- (void)FillCardInfoCancel;
- (void)FillCardNumberCancel:(BOOL)a0;
- (void)FillCardNumberConfirmWithImage:(id)a0 cardNumber:(id)a1 data:(id)a2;
- (void)FillCardNumberNext:(id)a0;
- (void).cxx_destruct;

@end
