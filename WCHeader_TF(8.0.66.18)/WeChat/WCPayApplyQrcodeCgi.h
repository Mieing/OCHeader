@class NSData;
@protocol WCPayApplyQrcodeCgiDelegate;

@interface WCPayApplyQrcodeCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayApplyQrcodeCgiDelegate> m_delegate;
@property (retain, nonatomic) NSData *saveNotifyInfo;

- (id)initWithDelegate:(id)a0 saveNotifyInfo:(id)a1;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
