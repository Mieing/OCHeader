@class NSString;
@protocol WCPayResetPwdByTokenCgiDelegate;

@interface WCPayResetPwdByTokenCgi : WCPayBaseTenPayCgi

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *password;
@property (weak, nonatomic) id<WCPayResetPwdByTokenCgiDelegate> delegate;

- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
