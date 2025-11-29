@class NSString, TokeMess;
@protocol WCPayGetPayPwdTokenCgiDelegate;

@interface WCPayGetPayPwdTokenCgi : WCPayBaseTenPayCgi

@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) TokeMess *tokenMess;
@property (weak, nonatomic) id<WCPayGetPayPwdTokenCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)failWithError:(id)a0;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
