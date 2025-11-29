@protocol WCPayGenMallPrePayCgiDelegate;

@interface WCPayGenMallPrePayCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayGenMallPrePayCgiDelegate> cgiDelegate;

- (id)initWithDelegate:(id)a0 request:(id)a1;
- (void)startRquest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
