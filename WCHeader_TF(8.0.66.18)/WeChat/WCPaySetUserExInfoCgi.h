@class WCPaySetUserExInfoCgiRequest;
@protocol WCPaySetUserExInfoCgiDelegate;

@interface WCPaySetUserExInfoCgi : WCPayBaseTenPayCgi

@property (retain, nonatomic) WCPaySetUserExInfoCgiRequest *cgiRequest;
@property (weak, nonatomic) id<WCPaySetUserExInfoCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
