@class NSString;
@protocol WCPayOfflineCancelPayCgiDelegate;

@interface WCPayOfflineCancelPayCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayOfflineCancelPayCgiDelegate> cgiDelegate;
@property (retain, nonatomic) NSString *req_Key;
@property (nonatomic) unsigned int payChannel;

- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)callErrorDelegate;
- (void).cxx_destruct;

@end
