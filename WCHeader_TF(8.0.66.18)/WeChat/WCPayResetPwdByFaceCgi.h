@class NSString;
@protocol WCPayResetPwdByFaceCgiDelegate;

@interface WCPayResetPwdByFaceCgi : WCPayBaseTenPayCgi

@property (weak, nonatomic) id<WCPayResetPwdByFaceCgiDelegate> cgiDelegate;
@property (retain, nonatomic) NSString *auth_token;
@property (retain, nonatomic) NSString *passwd;

- (id)initWithDelegate:(id)a0;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
