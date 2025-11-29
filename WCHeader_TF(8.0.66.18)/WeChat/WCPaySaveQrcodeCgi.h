@protocol WCPaySaveQrcodeCgiDelegate;

@interface WCPaySaveQrcodeCgi : WCPayBaseCgi

@property (retain, nonatomic) id<WCPaySaveQrcodeCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0 request:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
