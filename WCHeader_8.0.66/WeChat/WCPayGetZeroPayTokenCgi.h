@class NSString, TokeMess;
@protocol WCPayGetZeroPayTokenCgiDelegate;

@interface WCPayGetZeroPayTokenCgi : WCPayBaseTenPayCgi

@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) TokeMess *tokenMess;
@property (nonatomic) unsigned int use_touch;
@property (copy, nonatomic) NSString *fingerdata;
@property (weak, nonatomic) id<WCPayGetZeroPayTokenCgiDelegate> m_cgiDelegate;

- (id)init;
- (void)startRequest;
- (void)failWithError:(id)a0;
- (void)didGetTenPayResponse:(id)a0;
- (void)didGetTenPayError:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
